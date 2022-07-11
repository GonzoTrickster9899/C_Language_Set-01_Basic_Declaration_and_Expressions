#include <stdio.h>
#include <math.h>

//--------------------------------------------------------------------------//
//  Basic #015:                                                             //
//    Write a C program to calculate the distance between the two points.   //
//--------------------------------------------------------------------------//

int main(){                                                           // Start a program
  int x1, y1, x2, y2;                                                 // Declare the integers x1, y1, x2, y2
  float difference;                                                   // Declare the real number difference
  printf("Input x1: ");                                               // Input x1
  scanf("%d", &x1);                                                   // Read x1 that you inputted
  printf("Input y1: ");                                               // Input y1
  scanf("%d", &y1);                                                   // Read y1 that you inputted
  printf("Input x2: ");                                               // Input x2
  scanf("%d", &x2);                                                   // Read x2 that you inputted
  printf("Input y2: ");                                               // Input y2
  scanf("%d", &y2);                                                   // Read y1 that you inputted
	
  difference=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));               // To get difference, subtract from x1 to x2 and from y1 to y2, square the difference of x and y, add the squared x and y, then square root them
	
	printf("\nDistance between the said points: %.4f\n", difference);   // Print the difference on the screen
}                                                                     // Terminate a program
