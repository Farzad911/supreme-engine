#include "converting.h"

void converting() {
/* Version 1 */
// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
// Includes all the necessary functions from stdio.h, string.h, and stdlib.h needed to manipulate
// strings and convert a string to an integer, a double, and a long value.
#include "converting.h" //including header file

// V1
void converting(void) {
    printf("*** Start of Converting Strings to int Demo ***\n");//printingstatement forbeginning of conversion 1
    char    intString[BUFFER_SIZE];// declaring array of char type
    int     intNumber;//declaring variable of int type
    // It start a do-while loop
    do {
        printf("Type an int numeric string (q - to quit) : \n"); // printing instructionstatement
        fgets(intString, BUFFER_SIZE, stdin);// Prompt user for a integer numeric string
        intStrings[strlen(intString) - 1] = '\0';// Replace new line with null terminator
        if (strcmp(intString, "q") != 0) { // Check user input, exit if 'q' was entered.
            intNumber = atoi(intString);// Convert user entry from string to integer value.
            printf("Converted number is %d\n", intNumber);//printing convertednumber
        }
    } while (strcmp(intString, "q") != 0); // breaks the loop if user inputs 'q' as the only character
    // The do-while loop end
    printf("*** End of Converting Strings to int Demo ***\n\n");// Output an ending statement to mark end of the modul
}
/* Version 2 */
>> insert here


/* Version 3 */
>> insert here


}
