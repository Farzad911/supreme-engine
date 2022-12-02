// Start macros and headers here
#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10 
#include "fundamentals.h"//including header file
// End macros and headers

void fundamentals(void) {
// V1
    printf("*** start of Indexing Strings Demo ***\n");//printing statement for beginning the module.
    char buffer1[BUFFER_SIZE];// declaring array of char type 
    char numInput[NUM_INPUT_SIZE]; // declaring array of char type
    size_t position; 
     // It start a do-while loop
    do {
        printf("Type not empty string (q - to quit): \n");  // printing instructionstatement
        fgets (buffer1, BUFFER_SIZE, stdin); // Prompt user for a integer numeric string
        buffer1[strlen (buffer1) - 1] = '\0'; // Replaces user entered newline with null terminator

        // checks if entered string is not equals to 'q'.
        if (strcmp (buffer1, "q") != 0) { 
            printf("Type the character position within the string: \n"); 
            fgets (numInput, NUM_INPUT_SIZE, stdin);// Prompt user for a integer numeric string
            numInput[strlen (numInput) - 1] = '\0'; // Replaces user entered newline with null terminator
            position = atoi (numInput); // Converts entered string to integer.

            // Checks if converted integer is larger then string length and assigns max position if true.
            if (position >= strlen (buffer1)) { 
                position = strlen (buffer1) - 1; 
                printf("Too big... Position reduced to max. availbale\n");
            }
            printf("The character found at %d position is '%c\'\n",(int)position, buffer1[position]);
        }
    } while (strcmp (buffer1, "q") != 0); // breaks the loop if user inputs 'q' as the only character
    // The do-while loop end
    printf("*** End of Indexing Strings Demo ***\n\n"); // Output an ending statement to mark end of the module
