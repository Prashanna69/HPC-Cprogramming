#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int *numbers;
  int size;

  // Seed the random number generator
  srand(time(NULL));

  // Ask the user for the array size between 1 and 50
  do {
    printf("Enter the size of the array (1-50): ");
    scanf("%d", &size);
  } while (size < 1 || size > 50);

  // Allocate memory for the array using malloc
  numbers = (int *)malloc(size * sizeof(int));

  if (numbers == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  // Fill the array with random numbers
  for (int i = 0; i < size; i++) {
    numbers[i] = rand();
  }

  // Print the values of the array
  printf("Array elements:\n");
  for (int i = 0; i < size; i++) {
    printf("%d is %d\n", i, numbers[i]);
  }

  // Free the allocated memory
  free(numbers);

  return 0;
}