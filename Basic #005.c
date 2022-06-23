#include <stdio.h>
//----------------------------------------------------------------------------------------//
//	Basic #005:	                                                                  //
//		Write a C program to compute the perimeter and area of a rectangle with a //
//	height of 7 inches and width of 5 inches.                                         //
//----------------------------------------------------------------------------------------//

int main(){                                                               // Start a program
	int height=7, width=5, perimeter, area;                           // Declare the integers height = 7 inches, width = 5 inches, perimeter, and area
	perimeter=(height+width)*2;                                       // To find perimeter, get the sum the height and weight and multiply by 2 (Algorithm)
	printf("Perimeter of the rectangle = %d inches\n", perimeter);    // Print the perimeter of the rectangle on the screen by inches (before the space line)
	area=height*width;                                                // To find area, multiply the height and weight (Algorithm)
	printf("Area of the rectangle = %d square inches\n", area);       // Print the area of the rectangle on the screen by inches (before the space line)
}                                                                         // Terminate the program
