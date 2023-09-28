#include <stdio.h>
void main(int argc, char *argv[]) {
  for (int n = 0; n < 10; n++) {
    if (n % 2 == 1) {
      printf("%d is Odd \n", n);

    } else {
      printf("%d\n", n);
    }
  }
}