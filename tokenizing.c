// This is the main code for the Tokenizing module

// These lines set up our program to work properly
#define _CRT_SECURE_NO_WARNINGS  // This line stops some warnings from appearing
#define BUFFER_SIZE 300          // This sets how much text we can store (300 characters)

#include "tokenizing.h"  // This gets some helpful stuff from the "tokenizing.h" file

// We start the tokenizing function here
void tokenizing(void)
{
    // This is the first version of our function

    
    printf("*** Start of Tokenizing Words Demo ***\n");

    // We're making a place to store the text the user types
    char    words[BUFFER_SIZE];

    // This is for keeping track of the next word in the text
    char*   nextWord = NULL;

    // We'll use this to count the words
    int wordsCounter;

    
    do
    {
        // We ask the user to type some words and say 'q' to quit
        printf("Type a few words separated by space (q - to quit):\n");

        // We store what they type in 'words'
        fgets(words, BUFFER_SIZE, stdin);

        // We remove the last character (newline) from what was typed
        words[strlen(words) - 1] = '\0';

        // We check if the user didn't just type 'q' to quit
        if (strcmp(words, "q") != 0)
        {
            // We find the first word
            nextWord = strtok(words, " ");

            // We start counting words from 1
            wordsCounter = 1;

            // We keep finding and printing words until there are no more
            while (nextWord)
            {
                // We print each word and its number
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);

                // We find the next word
                nextWord = strtok(NULL, " ");
            }
        }

    // We keep doing this until the user types 'q'
    } while (strcmp(words, "q") != 0);

    // We tell the user that this part of the program is ending
    printf("*** End of Tokenizing Words Demo ***\n\n");
     
    //V2
    // This line tells the user that we're starting a demo about splitting phrases
    printf("*** Start of Tokenizing Phrases Demo ***\n");

    // We're making a space to store the phrases the user will type
    char    phrases[BUFFER_SIZE];

    // This is for keeping track of the next phrase we find
    char*   nextPhrase = NULL;

    int     phrasesCounter;

    // We start a loop that keeps asking the user to type stuff
    do {
    // We ask the user to type some phrases, separated by commas, and 'q' to quit
        printf("Type a few phrases separated by comma (q - to quit):\n");

    // We store what they type in 'phrases'
        fgets(phrases, BUFFER_SIZE, stdin);

    // We remove the last character (newline) from what was typed
        phrases[strlen(phrases) - 1] = '\0';

    // We check if the user didn't type 'q' to quit
        if (strcmp(phrases, "q") != 0) {
        // We find the first phrase
            nextPhrase = strtok(phrases, ",");

        // We start counting phrases from 1
            phrasesCounter = 1;

        // We keep finding and printing phrases until there are no more
            while (nextPhrase) {
            // We print each phrase and its number
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);

            // We find the next phrase
                nextPhrase = strtok(NULL, ",");
            }
        }

    // We keep doing this until the user types 'q'
    } while (strcmp(phrases, "q") != 0);
    // We tell the user that the demo about splitting phrases is over
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

// V3

    // Print a message saying the tokenizing sentences demo is starting.
    printf("*** Start of Tokenizing Sentences Demo ***\n");

    // Create a string variable to store the sentences entered by the user.
    char    sentences[BUFFER_SIZE];

    // Create a pointer to keep track of the next sentence.
    char*   nextSentence = NULL;

    // Create an integer to count the sentences.
    int     sentencesCounter;

    // Start a loop that will keep running until we type 'q'.
    do {
        // Ask the user to type some sentences separated by dots, or 'q' to quit.
        printf("Type a few sentences separated by dot(q - to quit):\n");

        // Read the input from the user and save it in the sentences variable.
        fgets(sentences, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input.
        sentences[strlen(sentences) - 1] = '\0';

        // Check if the input is not 'q'.
        if ((strcmp(sentences, "q") != 0)) {
            // Start breaking the sentences into smaller parts (tokens) separated by dots.
            nextSentence = strtok(sentences, ".");

            // Initialize the sentence counter to 1.
            sentencesCounter = 1;

            // Loop through each tokenized sentence.
            while (nextSentence) {
                // Print each sentence with its number.
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);

                // Get the next sentence, if any.
                nextSentence = strtok(NULL, ".");
            }
        }
        // Keep doing this until 'q' is entered.
    } while (strcmp(sentences, "q") != 0);

    // Print a message saying the tokenizing sentences demo is ending.
    printf("*** End of Tokenizing Sentences Demo ***\n\n");


}
