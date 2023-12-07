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
    int  intNumber;

    // Now we start a loop 
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
   
   // V2
   // This line tells the user about converting text to double (a type of number)
    printf("*** Start of Converting Strings to double Demo ***\n");

   // We're making a space to store the text the user will type
    char   doubleString[BUFFER_SIZE];

   // This is where we'll store the number after we change it from text
    double doubleNumber;

    do {
    // We ask the user to type a number in text form, and they can type 'q' to stop
        printf("Type the double numeric string (q - to quit):\n");

    // We get what the user types and put it in doubleString
        fgets(doubleString, BUFFER_SIZE, stdin);

    // We take off the last character (newline) from what the user typed
        doubleString[strlen(doubleString) - 1] = '\0';

    // We check if the user didn't type 'q' to quit
        if ((strcmp(doubleString, "q") != 0)){
        // We change the text to a double (a type of number)
            doubleNumber = atof(doubleString);

        // We show the user the number we got from the text
           printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);  // We keep doing this until the user types 'q'


    printf("*** End of Converting Strings to double Demo ***\n\n");



    // V3
    // Print a message saying the program is starting.
    printf("*** Start of Converting Strings to long Demo ***\n");

    // Create a variable to store the string we will convert.
    char longString[BUFFER_SIZE];

    long longNumber;

    // Start a loop that will keep asking for input until we type 'q'.
    do {
        // Ask the user to type a number as a string.
        printf("Type the long numeric string (q to quit):\n");

        // Read the input from the user and save it in longString.
        fgets(longString, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input.
        longString[strlen(longString) - 1] = '\0';

        // Check if the input is not 'q'.
        if ((strcmp(longString, "q") != 0)) {
            // Convert the string to a long number.
            longNumber = atol(longString);

            // Print the converted number.
            printf("Converted number is %ld\n", longNumber);
        }
        // Keep doing this until 'q' is entered.
    } while (strcmp(longString, "q") != 0);

    // Print a message saying the program is ending.
    printf("*** End of Converting Strings to long Demo ***\n\n");




}
