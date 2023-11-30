// This is the main code for the Manipulating module

// These lines are for setting things up so the program works well
#define _CRT_SECURE_NO_WARNINGS  // This line stops some security warnings
#define BUFFER_SIZE 80           // This sets how much space we have for text (80 characters)

#include "manipulating.h"  // This gets some helpful stuff from the "manipulating.h" file

// This is where we start the manipulating function
void manipulating(void)
{
    // This is the first version of our function

    
    printf("*** Start of Concatenating Strings Demo ***\n");

    // We're creating two places to store text (strings) the user types
    char     string1[BUFFER_SIZE];
    char     string2[BUFFER_SIZE];

    // We start a loop 
    do
    {
        // We ask the user to type the first string and say 'q' to quit
        printf("Type the 1st string (q - to quit):\n");

        // We store what they type in string1
        fgets(string1, BUFFER_SIZE, stdin);

        // We remove the last character (newline) from what was typed
        string1[strlen(string1) - 1] = '\0';

        // We check if the user didn't just type 'q' to quit
        if (strcmp(string1, "q") != 0)
        {
            // Now we ask for the second string
            printf("Type the 2nd string:\n");

            // We store the second string in string2
            fgets(string2, BUFFER_SIZE, stdin);

            // We again remove the last character (newline) from string2
            string2[strlen(string2) - 1] = '\0';

            // We put string2 at the end of string1
            strcat(string1, string2);

            // We show the user the combined string
            printf("Concatenated string is \'%s\'\n", string1);
        }

    // We keep doing this until the user types 'q'
    } while (strcmp(string1, "q") != 0);

    // We tell the user that this part of the program is ending
    printf("*** End of Concatenating Strings Demo ***\n\n");

    // Here we can add more versions (Version 2, Version 3, etc.) of the function later
}
