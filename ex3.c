#include <stdio.h>

int main()
{
  int age = 10;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;
}

// Notes
// -First you're including another "header file" called studio.h which tells the compiler that you're going to use the "standard Input/Output functions". One of those is printf.

// -Then your're using a variable named age and setting it to 10.

// -Next you're using a variable named height and setting it to 72.

// -Then you use the printf function to print age and height of the tallest 10 year old on the planet.

// -In the printf you'll notice you're passing in a string, and it's a format string link in many other languages.

// -After this format string, you put the variables that should be replaced into the format string by printf.

// -The result of doing this is you are handing printf some variables and it is constructing a new string then printing that new string to the terminal.

