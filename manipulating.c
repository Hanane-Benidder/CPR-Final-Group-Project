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

    //V2
    // We start by telling the user that this is a demo for comparing strings
    printf("*** Start of Comparing Strings Demo ***\n"); 

    // We're creating two places to store the texts (strings) the user will type
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];

    // This will help us see how the strings are different
    int result;

    // We start a loop that will keep asking the user to type things
    do {
    // We ask the user to type the first string and 'q' to quit
        printf("Type the 1st string to compare (q - to quit) :\n");

    // We save what they type in compare1
        fgets(compare1, BUFFER_SIZE, stdin);

    // We remove the last character (newline) from the string
        compare1[strlen(compare1) - 1] = '\0';

    // If the user didn't type 'q', we ask for another string
        if (strcmp(compare1, "q") != 0) {
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0';

        // We compare both strings and store the result
            result = strcmp(compare1, compare2);

        // Depending on the result, we tell the user which string is 'bigger', 'smaller', or if they are 'equal'
            if (result < 0)
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            else if (result == 0)
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else
                 printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0);  // We keep doing this until the user types 'q'

    // We tell the user that the comparing strings demo is over
    printf("*** End of Comparing Strings Demo ****\n\n");





}
