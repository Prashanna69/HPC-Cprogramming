#include <stdio.h> //Importing neccessary libraries.
#include <stdlib.h>
int main(int argc, char *argv[]) { // Declaring command line arguements
  char *name = argv[1];            // Get the name from commandline arguement
  int age = atoi(argv[2]);         // Get the age from commandline arguement

  printf("Hello %s, you are %d years old.", name, age); // Printing the output
  return 0; // return 0 to indicate successful program execution
}

// Write in terminal to run the program
// gcc Question1.c -o Question1
// after getting non error
// ./Question1