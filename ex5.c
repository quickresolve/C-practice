#include <stdio.h>

// Include imports contents of another file into this one. .h are header files

/* This is a comment */

int main(int argc, char *argv[])
{
  int distance = 100;
  // declaring a variable and assigning it.

  // this is also a comment
  printf("You are %d miles away.\n", distance );
  // printf can take any number of arguments

  return 0;
  // the return is giving your operating system an exit value
}

// main function takes two arguments, first an integer for the argument count, second an array of char * strings