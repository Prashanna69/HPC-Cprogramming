#include <stdio.h>

void main(int argc, char *argv[]) {
  for (int n = 1; n < 101; n++) {
    if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0) {
      printf("BishBashBosh \n"); // If n is divisible by 2, 3, and 5, print
                                 // "BishBashBosh".
    } else if (n % 2 == 0 && n % 5 == 0) {
      printf("BishBosh \n"); // If n is divisible by 2 and 5, print "BishBosh".
    } else if (n % 3 == 0 && n % 5 == 0) {
      printf("BashBosh \n"); // If n is divisible by 3 and 5, print "BashBosh".
    } else if (n % 2 == 0 && n % 3 == 0) {
      printf("BishBash \n"); // If n is divisible by 2 and 3, print "BishBash".
    } else if (n % 2 == 0) {
      printf("Bish \n"); // If n is divisible by 2, print "Bish".
    } else if (n % 3 == 0) {
      printf("Bash \n"); // If n is divisible by 3, print "Bash".
    } else if (n % 5 == 0) {
      printf("Bosh\n"); // If n is divisible by 5, print "Bosh".
    } else {
      printf(
          "%d\n",
          n); // If none of the above conditions are met, print the value of n.
    }
  }
}

// Write in terminal to run the program
// gcc Question3.c -o Question3
// after getting non error
// ./Question3