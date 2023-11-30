// These lines are for setting things up so the code works well without warnings and sets a size for buffers
#define _CRT_SECURE_NO_WARNINGS  // This line stops some warnings from showing up
#define BUFFER_SIZE 80           // This sets a size for how much text we can store, 80 characters
#define NUM_INPUT_SIZE 10        // This sets a size for numbers we input, 10 characters

#include "fundamentals.h"  // This line gets some functions from another file named "fundamentals.h"

// We start the fundamentals function here
void fundamentals(void)
{
    // This is the first version of our code

    // We tell the user that this program part is about indexing strings
    printf("*** Start of Indexing Strings Demo ***\n");

    // We're creating space to store the text the user types
    char bufferl[BUFFER_SIZE];
    // And space for a number the user will type
    char numInput[NUM_INPUT_SIZE];

    // This is for keeping track of a position in the text
    size_t position;

    // We start a loop that will keep asking the user to type stuff
    do
    {
        // We ask the user to type a string, but not just enter
        printf("Type not empty string (q - to quit):\n");

        // We store what they type in bufferl
        fgets(bufferl, BUFFER_SIZE, stdin);

        // We remove the last character (newline) from what was typed
        bufferl[strlen(bufferl) - 1] = '\0';

        // We check if the user didn't just type 'q' to quit
        if (strcmp(bufferl, "q") != 0)
        {
            // Now we ask for a position number
            printf("Type the character position within the string:\n");

            // We store the number in numInput
            fgets(numInput, NUM_INPUT_SIZE, stdin);

            // We again remove the last character (newline) from the number
            numInput[strlen(numInput) - 1] = '\0';

            // Convert the typed position to a size_t type
            position = atoi(numInput);

            // If the position is too big, we reduce it to the last character in the string
            if (position >= strlen(bufferl))
            {
                position = strlen(bufferl) - 1;
                printf("Too big... Position reduced to max. available\n");
            }

            // We show the character at the position the user gave
            printf("The character found at %d position is \'%c\'\n", (int)position, bufferl[position]);
        }

    // We keep doing this until the user types 'q'
    } while (strcmp(bufferl, "q") != 0);

    // We tell the user that this part of the program is ending
    printf("*** End of Indexing Strings Demo ***\n\n");

}