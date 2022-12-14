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
    printf("*** Start of Converting Strings to int Demo ***\n"); //printing statement for beginning the module.
    char    intString[BUFFER_SIZE];// declaring array of char type
    int     intNumber;//declaring variable of int type
    // start of a do-while loop
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
    printf("*** End of Converting Strings to int Demo ***\n\n");// Output an ending statement to mark end of the module
}
/* Version 2 */
  printf("*** Start of Converting Strings to double Demo ***\n"); //printing statement for beginning the module.

	char	doubleString[BUFFER_SIZE]; // declaring array of char type
	double	doubleNumber; //declaring variable of double type
    
    // start of a do-while loop
	do {
		// Prompt user for a double numeric string, replacing the new line read by 
		// fgets with a null terminator
		printf("Type an double numeric string (q - to quit):\n"); // printing instructionstatement
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';

		// Check user input, exit if 'q' was entered.  
		if ((strcmp(doubleString, "q") != 0)) {

			// Convert user entry from numeric string to a double, then display it
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);  // breaks the loop if user inputs 'q' as the only character
     // The do-while loop end
    printf("*** End of Converting Strings to double Demo ***\n\n");// Output an ending statement to mark end of the module


/* Version 3 */
printf("*** Start of Converting Strings to long Demo ***\n");//printing statement for beginning the module.
	
	char	longString[BUFFER_SIZE];// declaring array of char type
	long	longNumber;//declaring variable of long type
        // start of a do-while loop
	do {
		// Prompt user for a long numeric string, replacing the new line read by
		// fgets with a null terminator.
		printf("Type a long numeric string (q - to quit):\n");// printing instructionstatement
		fgets(longString, BUFFER_SIZE, stdin);// Prompt user for a integer numeric string
		longString[strlen(longString) - 1] = '\0';

		// Check user input, exit if 'q' was entered.
		if ((strcmp(longString, "q") != 0)) {

			// Convert user entry from numeric string to a long, then display it
			longNumber = atol(longString);
			printf("Converted number is %ld\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);// breaks the loop if user inputs 'q' as the only character
	// The do-while loop end
        printf("*** End of Converting Strings to long Demo ***\n\n");// Output an ending statement to mark end of the module
}



