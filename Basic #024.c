#include <stdio.h>
//------------------------------------------------------------------------------//
//	Basic #024:																	//
//		Write a C program that reads two integers and checks whether they are 	//
//	multiplied or not.															//
//------------------------------------------------------------------------------//
int main(){											// Start a program
	int num1, num2;									// Declare the integers num1 and num2
	printf("Input the first number: ");				// Input the first number num1
	scanf("%d", &num1);								// Read num1 that you inputted
	printf("Input the second number: ");			// Input the second number num2
	scanf("%d", &num2);								// Read num2 that you inputted
	if(num1%num2==0 || num2%num1==0){				// IF Statement: If the quotient between two number has no remainder or vice-versa
		printf("\nMultiplied!\n");					// If true, print "Multiplied!" on the screen
	}else{											// If not...
		printf("\nNot multiplied!\n");				// Then, print "Not multiplied!" on the screen
	}												// Terminate a program
}
