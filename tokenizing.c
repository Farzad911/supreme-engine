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
        printf("Type a few words separated by space (q - to quit):\n"); // printing instructionstatement

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
>> insert here


/* Version 3 */
>> insert here


}
