#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power =2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("Yout have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power );
  printf("I have an initial %c.\n", initial );
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c %s.\n", first_name, initial, last_name);
  printf("");

  return 0;
}

/*
Variable Types:
-Integers -
You declare Integers with the int keyword, and print them with %d.
-Floating Point-
Declared with float or double depending on how big they need to be, and printed with %f.
-Character-
Declared with char, written with a '' (single quote) character around the char, and then printed with %c.
-String(Array of Characters)-
Declared with char name[], written with "" characters, and printed with %s.

*/