#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("ERROR: You need one argument.\n");
    // this is how you abort a program
    return 1;
  }

  int i = 0;
  for (i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];

    switch (letter) {
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;

      case 'e':
      case 'E':
        printf("%d: 'E'\n", i);
        break;

      case 'i':
      case 'I':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
      case 'O':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
      case 'U':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
      case 'Y':
        if (i > 2) {
          printf("%d: 'Y'\n", i);
          //it's only sometimes Y
        }
        break;

      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }

  return 0;
}


// The switch statement is really a jump table. Instead of random boolean expressions, you can only put expressions that result in integers. These integers are used to calculate jumps from the top of the switch to the part that matches that value.

/* How it works:

1) The compiler marks the place in the program where the switch statement starts. Let's call this location Y.
2) It then evaluates the expression is switch(letter) to come up with a number. In this case, the number will be raw ASCII code of the letter in argv[1].

*/
