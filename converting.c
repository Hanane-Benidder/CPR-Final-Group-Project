// This code is about converting text to numbers

// These lines are for setting things up so the code works well
#define _CRT_SECURE_NO_WARNINGS  // This is to stop certain warnings
#define BUFFER_SIZE 80  // This says we'll use a space of 80 characters for our text

#include "converting.h" // This gets some helpful stuff from another file named converting.h

// Here we start the function named converting
void converting(void)
{
    // This is the first version of the code

    // We're telling the user that the program is starting
    printf("*** Start of Converting Strings to int Demo ***\n");

    // We're creating a place to store the text the user types
    char intString[BUFFER_SIZE];

    // This is where we'll store the number after we change it from text
    int intNumber;

    // Now we start a loop that will keep asking the user to type stuff
    do
    {
        // We ask the user to type a number in text form
        printf("Type an int numeric string (q - to quit):\n");

        // We get what the user types and store it in intString
        fgets(intString, BUFFER_SIZE, stdin);

        // We remove the last character (newline) from what the user typed
        intString[strlen(intString) - 1] = '\0';

        // We check if the user typed 'q' to quit. If not, we convert the text to a number
        if (strcmp(intString, "q") != 0)
        {
            // We change the text to a number
            intNumber = atoi(intString);

            // We show the user the number we got from the text
            printf("Converted number is %d\n", intNumber);
        }

    // We keep doing this until the user types 'q'
    } while (strcmp(intString, "q") != 0);

    // We're telling the user that the program is ending
    printf("*** End of Converting Strings to int Demo ***\n\n");

}
