#include <stdio.h>

int main(int argc, char const *argv[]) {
  int *m, size;
  printf("Enter the values of size:");
  scanf("%d", &size);
  m = (int *)malloc(size * sizeof(int));
  printf("Base address of the memory allocated on heap:%d\n", m);
  printf("Total allocated memory:%d Byte\n", sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    printf("%d Array element store in %d Address \n", *(m + i), (m + i));
  }
  for (int i = 0; i < size; i++) {
    printf("*(m+%d)=%d,(m+%d)=%d\n", i, *(m + i));
  }
}