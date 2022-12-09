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
        printf("Type not empty string (q - to quit): \n");  // printing instruction statement
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
}
/* Version 2 */

 printf("*** Start of Measuring Strings Demo ***\n"); //printing statement for beginning the module.
    char buffer2[BUFFER_SIZE]; // declaring array of char type 
// Start a do-while loop
    do { 
        printf("Type a string (q - to quit):\n");  // printing instruction statement 
        fgets(buffer2, BUFFER_SIZE, stdin); //Gets the user entered string
        buffer2[strlen(buffer2) - 1] = '\0'; // Replaces user entered newline with null terminator 

        // checks if entered string is not equals to 'q'.
        if (strcmp(buffer2, "q") != 0) {
            printf("The length of \'%s\' is %d characters\n", 
            buffer2, (int)strlen(buffer2)); 
        }
    } while (strcmp(buffer2, "q") != 0); // breaks the loop if user inputs 'q' as the only character
    // The do-while loop end
    printf("*** End of Measuring Strings Demo ***\n\n");// Output an ending statement to mark end of the module
}
/* Version 2 */
 printf("*** Start of Copying Strings Demo ***\n"); //printing statement for beginning the module.
    char destination [BUFFER_SIZE]; // declaring array of char type 
    char source[BUFFER_SIZE]; // declaring array of char type 
// Start a do-while loop
    do {

        //Replaces first element of destination with null terminator
        destination [0] = '\0'; 

        printf("Destination string is reset to empty\n"); // printing instruction statement 
        printf("Type the source string (q - to quit): \n"); // printing instruction statement 
        fgets (source, BUFFER_SIZE, stdin); //Gets the user entered string
        //Replaces user entered new line with null terminator
        source[strlen (source) - 1] = '\0'; 
        // checks if entered string is not equals to 'q'.
        if (strcmp (source, "q") != 0) {

            //copies string from source to destination
            strcpy (destination, source); 
            printf("New destination string is \'%s\'\n", destination);
        }
        //loops till user enter q
    } while (strcmp (source, "q") != 0); // breaks the loop if user inputs 'q' as the only character
// The do-while loop end 
    printf("*** End of Copying Strings Demo ***\n\n"); // Output an ending statement to mark end of the module
}
