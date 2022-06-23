//------------------------------------------------------------------------//
//  Basic #004                                                            //
//    Make a program that use three characters to print on the screen and //
//    and print them in reverse order on the screen,                      //
//------------------------------------------------------------------------//

#include <stdio.h>

int main(){                                                                                      // Initial program
	char char1='X', char2='M', char3='L';                                                    // Declare the three characters (char) with value in every variable
	printf("Test Characters: '%c', '%c', '%c'\n", char1, char2, char3);                      // Print the three values of characters on the screen.
	printf("\nThe reverse of %c%c%c is %c%c%c", char1, char2, char3, char3, char2, char1);   // Print them in reversed order on the screen
}                                                                                                // End of program
