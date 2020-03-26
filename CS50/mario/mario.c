//My solution for CS50 Lab Mario World 1-1

#include <cs50.h>
#include <stdbool.h> 
#include <stdio.h>

// Global Variables
int insize, input, height;
char endl;

// Function Declarations
int prompt(void);
bool notchar(int, char);
bool indigit(int);
void printpyramid(int);



int main(void)
{
    //set height to return of prompt function
    height = prompt(); 

    //if indigit function returns true execute printpyramid function
    if (indigit(height) == true) 
    {
        printpyramid(height);
    }
            
}

//Define prompt function
int prompt() 
{
    //Continuously prompt user until they input an integer between 1-8 inclusive
    do 
    {
        printf("Input Height(1-8):\n"); 
        insize = scanf("%d%c", &input, &endl); 
        //assign insize to size of user input string and endl to final input character

        if (notchar(insize, endl) == false) //check if notchar function returns false
        {
            return -1;
        }
    }
    while (indigit(input) == false);
    /* condition for prompt verifies indigit function returning false. */

    return input;
};

//Define notchar function
bool notchar(int n, char t) 
{
    // Check if size of input string not equal 2 or the final char not equal newline
    if (n != 2 || t != '\n') 
    {
        printf("Failure: You did not enter a height.\n");
        return false; 
    }
    else 
    {
        return true; 
    }
};

// Define function indigit
bool indigit(int d) 
{
    // Check if digit is less than 1 or greater than 8
    if (d < 1 || d > 8) 
    {
        return false; 

    } 
    else
    { 
        return true; 
    }
};

// Define function printpyramid
void printpyramid(int ht) 
{
    int cnt = 0; 
    for (int r = 0; r < ht; r++) //iterate for rows less than height, incrementing
    {
        //check if count not equal to height
        if (cnt != ht) 
        {
            //iterate for spaces equal to height less one less the count, decrementing
            for (int sp = (ht - 1) - cnt; sp > 0; sp--) 
            {
                printf(" "); //print space
            }

            //iterate for hashes less than or equal to count, incrementing
            for (int hsh = 0; hsh <= cnt; hsh++) 
            {
                printf("#"); //print hash
            }

            printf("\n"); //terminate row with a new line
        }  

        cnt++; //increment count
    }
}



