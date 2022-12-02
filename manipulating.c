#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "manipulating.h" 
/* Contains function prototypes and library declarations */

// V1
void manipulating(void) {
/* Purpose: This function concatenates, compares and checks occurence bet. 2 input strings */

	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[BUFFER_SIZE];
	char string2[BUFFER_SIZE];

	do {
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);		// Get the 1st string input
		string1[strlen(string1) - 1] = '\0';	// Add the null terminator in the end of the string

		if ((strcmp(string1, "q") != 0)) {		// If the input is not equal to "quit"
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);	// Get the 2nd string input
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);		// Repeat input as long as input is not equal to "quit"

	printf("*** End of Concatenating Strings Demo ***\n\n");
