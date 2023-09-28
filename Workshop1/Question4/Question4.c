#include <stdio.h>
#include <stdlib.h>

// Function to swap the values of two integers using pointers.
void swap(int *a, int *b) {
  int temp;  // Temporary variable to hold the value during the swap.
  temp = *a; // Store the value of 'a' in 'temp'.
  *a = *b;   // Assign the value of 'b' to 'a'.
  *b = temp; // Assign the value stored in 'temp' (which was 'a') to 'b'.
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]); // Convert the first command-line argument to an
                         // integer and store it in 'a'.
  int b = atoi(argv[2]); // Convert the second command-line argument to an
                         // integer and store it in 'b'.

  printf("a is %d and b is %d \n", a,
         b); // Print the initial values of 'a' and 'b'.

  swap(&a, &b); // Call the 'swap' function to swap the values of 'a' and 'b'.

  printf("a is now %d and b is now %d", a,
         b); // Print the values of 'a' and 'b' after the swap.

  return 0;
}

// Write in terminal to run the program
// gcc Question4.c -o Question4
// after getting non error
// ./Question4