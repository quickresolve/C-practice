//My solution for CS50 Lab Mario World 1-1 Full Pyramid

#include <cs50.h>
#include <stdbool.h> 
#include <stdio.h>

// Global Variables
int input, height;

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
        input = get_int("Input Height(1-8):\n");
       
    }
    while (indigit(input) == false);
    /* condition for prompt verifies indigit function returning false. */

    return input;
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

            printf("  ");

            for (int rhsh = 0; rhsh <= cnt; rhsh++)
            {
                printf("#"); //print right hashes
            }

            printf("\n"); //terminate row with a new line
        }  

        cnt++; //increment count
    }
}
