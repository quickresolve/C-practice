#include <stdio.h>

int main()
{
  int age = 10;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}

// Valgrind
// To run use valgrind ./program_name after make command has been executed for the program.