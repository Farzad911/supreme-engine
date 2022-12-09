// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h" //including header file
/* Contains function prototypes and library declarations */
// V1
void manipulating(void) {
/* Purpose: This function concatenates, compares and checks occurence bet. 2 input strings */
printf("*** Start of Concatenating Strings Demo ***\n");//printing statement for beginning the module
char string1[BUFFER_SIZE];// declaring array of char type
char string2[BUFFER_SIZE];// declaring array of char type
//Start a do-while loop
do {
    printf("Type the 1st string (q - to quit):\n"); // printing instructionstatement
    fgets(string1, BUFFER_SIZE, stdin);	// Get the 1st string input
    string1[strlen(string1) - 1] = '\0';// Add the null terminator in the end of the string
    if ((strcmp(string1, "q") != 0)) {	// If the input is not equal to "quit"
      printf("Type the 2nd string:\n");
      fgets(string2, BUFFER_SIZE, stdin);// Get the 2nd string input
      strcat(string1, string2);
      printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);// Repeat input as long as input is not equal to "quit"
       // The do-while loop end
	printf("*** End of Concatenating Strings Demo ***\n\n"); // Output an ending statement to mark end of the module
}
/* Version 2 */
printf("*** Start of Comparing Strings Demo ***\n");//printing statement for beginning the module
char compare1[BUFFER_SIZE];//declaring array of char type
char compare2[BUFFER_SIZE];//declaring array of char type
int result;//declaring array of int type
//Start a do-while loop
do {
    printf("Type the 1st string to compare (q - to quit):\n"); // printing instructionstatement
    fgets(compare1, BUFFER_SIZE, stdin);	// Get the 1st string input
    compare1[strlen(compare1) - 1] = '\0';	// Add the null terminator in the end of the string
	if (strcmp(compare1, "q") != 0) {		// Check if the user wants to exit the program
		printf("Type the 2nd string to compare:\n");
		fgets(compare2, BUFFER_SIZE, stdin);	// Get the 2nd string input
		compare2[strlen(compare2) - 1] = '\0';	// Add the null terminator in the end of the string
		result = strcmp(compare1, compare2);	// Compare the 2 strings
		if (result < 0)
			printf("\'%s\' string is less than '%s\'\n", compare1, compare2);
		else if (result == 0)
			printf("\'%s\' string is equal to '%s\'\n", compare1, compare2);
		else
		        printf("\'%s\' string is greater than '%s\'\n", compare1, compare2);
		}
} while (strcmp(compare1, "q") != 0);	// Continue while user doesn't want to quit
// The do-while loop end
printf("*** End of Comparing Strings Demo ***\n\n");// Output an ending statement to mark end of the module




/* Version 3 */
printf("*** Start of Searching Strings Demo ***\n");//printing statement for beginning the module
	char haystack[BUFFER_SIZE];//declaring array of char type
	char needle[BUFFER_SIZE];//declaring array of char type
	char* occurence = NULL;//declaring array of char type
	//Start a do-while loop
	do {
		printf("Type the string (q - to quit):\n"); // printing instructionstatement
		fgets(haystack, BUFFER_SIZE, stdin);		// Get the 1st string input
		haystack[strlen(haystack) - 1] = '\0';		// Add the null terminator in the end of the string
		if (strcmp(haystack, "q") != 0) {			// Check if the user wants to exit the program
			printf("Type the substring:\n");
			fgets(needle, BUFFER_SIZE, stdin);		// Get the 2nd string input
			needle[strlen(needle) - 1] = '\0';		// Add the null terminator in the end of the string
			occurence = strstr(haystack, needle);	// Check if 2nd string occurs on 1st string
			if (occurence)							// If found, return the position where 2nd string occurs
				printf("\'%s\' found at %d position\n", needle, (int) (occurence - haystack));
			else						
				printf("Not found\n");				
		}
	} while (strcmp(haystack, "q") != 0); // Continue while user doesn't want to quit
         // The do-while loop end
	printf("*** End of Searching Strings Demo ***\n\n"); // Output an ending statement to mark end of the module
}



