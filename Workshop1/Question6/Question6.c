#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *threadA(void *p) {
  for (int i = 0; i < 10; i++) {
    printf("Thread ID %ld (A): i=%d\n", pthread_self(), i);
    usleep(1000);
  }
  pthread_exit(NULL);
}

void *threadB(void *p) {
  for (int i = 0; i < 10; i++) {
    printf("Thread ID %ld (B): i=%d\n", pthread_self(), i);
    usleep(1000);
  }
  pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <number_of_threads>\n", argv[0]);
    return 1;
  }

  int num_threads = atoi(argv[1]);

  if (num_threads <= 0) {
    printf("Number of threads must be a positive integer.\n");
    return 1;
  }

  pthread_t *threadIDs = (pthread_t *)malloc(num_threads * sizeof(pthread_t));

  if (threadIDs == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  for (int i = 0; i < num_threads; i++) {
    if (i % 2 == 0) {
      pthread_create(&threadIDs[i], NULL, threadA, NULL);
    } else {
      pthread_create(&threadIDs[i], NULL, threadB, NULL);
    }
  }

  for (int i = 0; i < num_threads; i++) {
    pthread_join(threadIDs[i], NULL);
  }

  free(threadIDs);

  return 0;
}

// Write in terminal to run the program
// gcc Question6.c -o Question6
// after getting non error
// ./Question6