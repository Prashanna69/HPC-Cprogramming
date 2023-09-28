#include <stdio.h>

int main() {
  char *name[100];
  int age;

  printf("Enter your name:\n");
  scanf("%s", &name);
  printf("Enter your age:\n");
  scanf("%d", &age);

  printf("Hello %s, you are %d years old.", name, age);
  return 0;
}