#include <stdio.h>
//---------------------------------------------------------------//
//	Basic #007:                                              //
//		Write a C program to display multiple variables. //
//---------------------------------------------------------------//

int main(){                                             // Start a program
	int a=125, b=12345;                             // Declare integers a of 125 and b of 12345
	long ax=1234567890;                             // Declare long integers ax of 1234567890
	short s=4043;                                   // Declare short integers s of 4043
	float x=2.13459;                                // Declare real number x of 2.13459
	double dx=1.1415927;                            // Declare real number dx of 1.1415927
	char c='W';                                     // Declare character c of 'W' (an outcast of ASCII Code based is 87)
	unsigned long ux=2541567890;                    // Declare unsigned long integer ux of 2541567890
	
	printf("a + c = %d\n",a+c);                     // Print the sum of integer a and  char c
	printf("x + c = %f\n",x+c);                     // Print the sum of float x and char c
	printf("dx + x = %f\n",dx+x);                   // Print the sum of double dx and float x
	printf("((int)dx) + ax = %ld\n",((int)dx)+ax);  // Print the sum of integer dx and long ax
	printf("a + x = %f\n",a+x);                     // Print the sum of integer a and float x
	printf("s + b = %d\n",s+b);                     // Print the sum of short s and integer b
	printf("ax + b = %ld\n",ax+b);                  // Print the sum of long ax and integer b
	printf("s + c = %hd\n",s+c);                    // Print the sum of short s and char c
	printf("ax + c = %ld\n",ax+c);                  // Print the sum of long ax and char c
	printf("ax + ux = %lu\n",ax+ux);                // Print the sum of long ax and unsigned long ux
}	                                                // Terminate a program
