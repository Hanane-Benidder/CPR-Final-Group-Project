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


    // V2
    // This line prints a message to tell us we're starting a demo on how long strings are
    printf("*** Start of Measuring Strings Demo ***\n");

    // We're making a space to store the text (string) that the user types
    char buffer2[BUFFER_SIZE];

    // We start a loop 
    do {
    // We ask the user to type any string of letters; they can type 'q' to stop
    printf("Type a string (q - to quit):\n"); 

    // We store the string the user types into buffer2
    fgets(buffer2, BUFFER_SIZE, stdin);

    // We remove the last character (newline) from what the user typed
    buffer2[strlen(buffer2) - 1] = '\0';

    // We check if the user didn't just type 'q' to quit
    if (strcmp(buffer2, "q") != 0)
        // We print the string and its length (how many characters it has)
        printf("The length of \'%s\' is %d characters\n",
                buffer2, (int)strlen(buffer2));

    // We keep doing this until the user types 'q'
    } while (strcmp(buffer2, "q") != 0);

    // We tell the user that the demo about measuring string lengths is over
    printf("*** End of Measuring Strings Demo ***\n\n");






    //V3
    // Print a message saying the program for copying strings is starting.
    printf("*** Start of Copying Strings Demo ***\n");

    // Create two string variables: one for the destination and one for the source.
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];

    // Start a loop that will keep running until we type 'q'.
    do {
        // Set the first character of the destination string to null, making it empty.
        destination[0] = '\0';

        // Print a message that the destination string is now empty.
        printf("Destination string is reset to empty\n");

        // Ask the user to type the source string.
        printf("Type the source string (q - to quit):\n");

        // Read the input from the user and save it in the source string.
        fgets(source, BUFFER_SIZE, stdin);

        source[strlen(source) - 1] = '\0';

        // Check if the source string is not 'q'.
        if (strcmp(source, "q") != 0) {
            // Copy the source string to the destination string.
            strcpy(destination, source);

            // Print the new destination string.
            printf("New destination string is \'%s\'\n", destination);
        }
        // Keep doing this until 'q' is entered.
    } while (strcmp(source, "q") != 0);

    // Print a message saying the program for copying strings is ending.
    printf("*** End of Copying Strings Demo ***\n\n");






}
