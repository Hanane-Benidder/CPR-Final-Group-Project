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


    //V3
    // Print a message saying the string searching demo is starting.
    printf("*** Start of Searching Strings Demo ***\n");

    // Create two string variables: 'haystack' for the main string and 'needle' for the substring.
    char    haystack[BUFFER_SIZE];
    char    needle[BUFFER_SIZE];

    // Create a pointer to store where the substring is found .
    char* occurrence = NULL;

    // Start a loop that will keep running until we type 'q'.
    do {
        // Ask the user to type the main string.
        printf("Type the string (q - to quit):\n");

        // Read the input from the user and save it in the haystack.
        fgets(haystack, BUFFER_SIZE, stdin);

        haystack[strlen(haystack) - 1] = '\0';

        // Check if the haystack is not 'q'.
        if (strcmp(haystack, "q") != 0) {
            // Ask the user to type the substring to search for.
            printf("Type the substring:\n");

            // Read the input from the user and save it in the needle.
            fgets(needle, BUFFER_SIZE, stdin);

            // Remove the newline character at the end of the input.
            needle[strlen(needle) - 1] = '\0';

            // Search for the needle in the haystack.
            occurrence = strstr(haystack, needle);

            // If the needle is found in the haystack...
            if (occurrence)
                // Print where it was found.
                printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
            else
                // If not found, print a message saying so.
                printf("Not found\n");
        }
        // Keep doing this until 'q' is entered.
    } while (strcmp(haystack, "q") != 0);

    // Print a message saying the string searching demo is ending.
    printf("*** End of Searching Strings Demo ***\n\n");




}
