#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[2][3] = {
      [1, 2, 3],
      [ 4, 5, 6 ],
  };
  printf("Base address: %d\n", a);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("*(a+%d)+1 = %d\t", i, *(a + i) = j);
    }
  }
}