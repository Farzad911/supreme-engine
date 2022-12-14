//TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
// Includes all the necessary functions from stdio.h, string.h, and stdlib.h needed to manipulate
// strings and convert a string to an integer, a double, and a long value.
#include "tokenizing.h" //including header file

void tokenizing(void) {

    // V1
    printf("*** Start of Tokenizing Words Demo ***\n"); //printing statement for beginning the module
    char words[BUFFER_SIZE];// declaring array of char type
    char* nextWord = NULL;// declaring array of char type
    int wordsCounter;//declaring variable of int type
     // It start a do-while loop
    do {
        printf("Type a few words separated by space (q - to quit):\n"); // printing instruction statement

        fgets(words, BUFFER_SIZE, stdin);// Prompt user for a integer numeric string
        words[strlen(words) - 1] = '\0'; // replaces the new line at the end of the string with null to indicate when the string ends
        if (strcmp(words, "q") != 0) { // only executes if user did not input 'q'
            nextWord = strtok(words, " "); // use an empty space as the delimiter to know when to split the string into tokens
            wordsCounter = 1; // intialize wordsCounter to 1, and start counting from 1 to keep track of how many words are being tokenized
            //  use a loop to print out the string, while incrementing wordsCounter to keep track of the number of words being tokenized 
            while (nextWord) {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " "); // when the next value of the string reads as null, we break out of the loop* /
            }
        }
    } while (strcmp(words, "q") != 0); // breaks the loop if user inputs 'q' as the only character
    // The do-while loop end
   printf("*** End of Tokenizing Words Demo ***\n\n");// Output an ending statement to mark end of the module
}
/* Version 2 */
 printf("*** Start of Tokenizing Phrases Demo ***\n");  //printing statement for beginning the module
    char phrases[BUFFER_SIZE]; // declaring array of char type
    char* nextPhrase = NULL; // declaring array of char type
    int phrasesCounter; // declaring array of int type
    // start a do-while loop
    do {
        printf("Type a few phrases separated by comma (q - to quit):\n"); // printing instruction statement

        fgets(phrases, BUFFER_SIZE, stdin); // Prompt user for a integer numeric string
        phrases[strlen(phrases) - 1] = '\0'; // replaces the new line at the end of the string with null to indicate when the string ends

        if ((strcmp(phrases, "q") != 0)) { // only executes if user did not input 'q'
            nextPhrase = strtok(phrases, ""); // use an empty space as the delimiter to know when to split the string into tokens
            phrasesCounter = 1; // intialize phrasesCounter to 1, and start counting from 1 to keep track of how many words are being tokenized
               // A loop is used to print out the string, while incrementing phrasesCounter to keep track of the number of phrases being tokenized 
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ","); // when the next value of the string reads as null, we break out of the loop
            }
        }
    } while (strcmp(phrases, "q") != 0); // breaks the loop if user inputs 'q' as the only character
    // The do-while loop end
    printf("*** End of Tokenizing Phrases Demo ***\n\n"); // Output an ending statement to mark end of the module


/* Version 3 */
 // V3
    /* Delimiter is now a single dot (".") */
    printf("*** Start of Tokenizing Sentences Demo ***\n"); //printing statement for beginning the module
    char sentences[BUFFER_SIZE]; // declaring array of char type
    char* nextSentence = NULL;// declaring array of char type
    int sentencesCounter;// declaring array of int type
 // start a do-while loop
    do {
        printf("Type a few sentences separated by dot (q - to quit):\n"); // printing instruction statement

        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0'; // replaces the new line at the end of the string with null to indicate when the string ends

        if ((strcmp(sentences, "q") != 0)) { // only executes if user did not input 'q'
            nextSentence = strtok(sentences, "."); // use a dot as the delimiter to know when to split the string into tokens
            sentencesCounter = 1; // intialize sentencesCounter to 1, and start counting from 1 to keep track of how many sentences are being tokenized

    //  use a loop to print out the string, while incrementing phrasesCounter to keep track of the number of sentences being tokenized 
            while (nextSentence) {
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, "."); // when the next value of the string reads as null, we break out of the loop
            }
        }
    } while (strcmp(sentences, "q") != 0); // breaks the loop if user inputs 'q' as the only character
// The do-while loop end
    printf("*** End of Tokenizing Sentences Demo ***\n\n"); // Output an ending statement to mark end of the module


}
