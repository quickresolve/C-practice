#Notes on Learning C

Learning C the hard way.


## #include <stdio.h>

# is known as compiler directive. Headerfile are the files with extension .h and they contain inbuilt functions such as printf, strlen, abs, etc. stdio.h stands for standard input output and it contains functions such as scanf, printf, gets, puts, etc.


##Escape Sequences & Format Specifiers

When using escape codes you start with a backslash. If you want to display a protected value that is part of the escape sequence you need to include a backslash first. The most common escape sequences include \n for new line and \t for new tab.

Format specifiers allow variance in the output by indicating that external data is needed. The % sign indicates that we are splicing some data into the string.

%% - allows you to print a % sign.

The format for what appears about a % sign is:
%[flag][min width][precision][length modifier][conversion specifier]

###Conversion Specifier

The conversion specifier is the part of the format specifier that determines the basic formatting of the value that is to be printed.

examples:
-%d to print out a decimal number
-%i to print integer
-%o to print octal
-%x to print hexadecimal
-%X to print capital letters
-%f to print floating point
-%e to print float in scientific notation with e
-%E to print float in scientific notation with capital E
-%g to print shorter version of float or scientific notation
-%G to print shorter version of float or scientific notation with capital letters

printf( "%g", 3.1415926 ); =
Printf Format Strings


###Length Modifier

The length modifier is what you use to specify the length of the input.

examples:

Variable Type:    Legth Modifier:   Example:
short int         h                 %hd
long int          l                 %ld
wide char or s    l                 %ls
long double       L                 %Lg

*If you happen to be using wprintf, you can simply use %s and it will natively treat all strings as wide character strings

###Precision & Width

The "precision" modifier is written ".number", and has slightly different meanings for the different conversion specifiers (like d or g).

The width field is almost the opposite of the precision field. Precision controls the max number of characters to print, width controls the minimum number, and has the same format as precision, except without a decimal point


###Flag

The flag setting controls 'characters' that are added to a string, such whether to append 0x to a hexadecimal number, or whether to pad numbers with 0s.

examples:
The Pound Sign: # - Adding a # will cause a '0' to be prepended to an octal number (when using the o conversion specifier), or a 0x to be prepended to a hexadecimal number (when using a x conversion specifier).

printf( "%#x", 12 ); => 0xc

The Zero Flag: 0 - Using 0 will force the number to be padded with 0s.

printf( "%05d\n", 10 ); => 00010

The Minus Sign Flag: - - the minus sign will cause the output to be left-justified.

printf( "|%-5d|%-5d|\n", 1, 2 ); => |1    |2    |



##Makefile

make - GNU make utility to maintain groups of programs

make is a UNIX tool to simplify building program executables from many modules. make reads in rules specified as a list of target entries from a user created Makefile. make will only re-build things that need to be re-built (objects or executables that depend on files that have been modified).





