#include <stdio.h> //importing necessary library.

int main() {
  char *name[100]; // Declaring the char array to store the name
  int age;         // Declaring an integer to store an age

  printf("Enter your name:\n"); // Display a prompt to enter name
  scanf("%s", &name);           // Read a string (name) from an user
  printf("Enter your age:\n");  // Display a prompt to enter age
  scanf("%d", &age);            // Read a integer (age) from an user

  printf("Hello %s, you are %d years old.", name, age); // Display an output
  return 0; // Return 0 to indicate successful program execution
}