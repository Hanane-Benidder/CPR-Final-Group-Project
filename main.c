// These lines set up our program to work properly without warnings
#define _CRT_SECURE_NO_WARNINGS  // This line stops certain security warnings

// We are including other files that have more code for our program
#include "fundamentals.h"  // This includes the code for the fundamentals part
#include "manipulating.h"  // This includes the code for the manipulating part
#include "converting.h"    // This includes the code for the converting part
#include "tokenizing.h"    // This includes the code for the tokenizing part

// This is the main part of our program
int main(void)
{
    
    char buff[10];

    // We start a loop that keeps asking the user what to do
    do
    {
        // We print options for the user to choose
        printf("1 - Fundamentals\n"); 
        printf("2 - Manipulation\n"); 
        printf("3 - Converting\n"); 
        printf("4 - Tokenizing\n"); 
        printf("0 - Exit\n"); 
        printf("Which module to run? \n"); 

        // We get the user's choice and store it in buff
        fgets(buff, 10, stdin); 

        // Depending on the user's choice, we call different functions
        switch (buff[0])
        {
            // If the user types '1', we run the fundamentals function
            case '1': 
                fundamentals(); 
                break; 

            // If the user types '2', we run the manipulating function
            case '2': 
                manipulating(); 
                break; 

            // If the user types '3', we run the converting function
            case '3': 
                converting(); 
                break; 

            // If the user types '4', we run the tokenizing function
            case '4': 
                tokenizing(); 
                break;
        }

    // We keep doing this until the user types '0' to exit
    } while (buff[0] != '0'); 

    // The program ends 
    return 0;
}

