#include <stdio.h>

//--------------------------------------------------------------------------------//
//	Basic #006:                                                               //
//		Write a C program to compute the perimeter and area of a circle   //	
//	with a radius of 6 inches.                                                //
//--------------------------------------------------------------------------------//
int main(){
	int radius=6;                                              // Declare the integers radius of 6 inches
	float pi=3.14, circle, circumference;                      // Declare the real numbers pi of 3.14, circumference and area of a circle
	circumference = (radius*2)*pi;                             // To get the perimeter of a circle, multiply radius by 2 and multiply by pi (algorithm)
	printf("Perimeter of the Circle = %f\n", circumference);   // Print the perimeter of the circle on the screen (before a space line)
	circle = (radius*radius)*pi;                               // To gett the area of a circle, multiply the radius by itself and multiply by pi (algorithm)
	printf("Area of the Circle = %f\n", circle);               // Print the area of a circle on the screen (before a space line)
}                                                                  // Terminate a program
