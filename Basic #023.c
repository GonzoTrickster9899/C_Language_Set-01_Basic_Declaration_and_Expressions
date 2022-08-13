#include <stdio.h>
//--------------------------------------------------------------------------------------//
//  Basic #023:                                                                         //
//    Write a C program that reads three floating values and check if it is possible    //
//    to make a triangle with them. Also calculate the perimeter of the triangle if the //
//    said values are valid.                                                            //
//--------------------------------------------------------------------------------------//
int main(){                                               // Start a program
  float num1, num2, num3, triangle;                       // Declare real numbers, first number num1, second number num2, third number num3, and triangle
  printf("Input the first number: ");                     // Input the first number num1
  scanf("%f", &num1);                                     // Read the num1 that you inputted
  printf("Input the second number: ");                    // Input the second number num2
  scanf("%f", &num2);                                     // Read the num2 that you inputted
  printf("Input the third number: ");                     // Input the third number num3
  scanf("%f", &num3);                                     // Read the num3 that you inputted
  if(num1+num2>num3 && num1+num3>num2 && num2+num3>num1){ // IF Statement: If the sum of num1 and num2 is greater than num3, the sum of num1 and num3 is greater than num2 and the sum of num2 and num3 is greater than a num1
    triangle=num1+num2+num3;                              // If true, then add the three numbers to get the perimeter of  a triangle
    printf("Perimeter = %.1f", triangle);                 // Print the perimeter of a triangle on the screen
  }else{                                                  // If not...
    printf("Impossible to create a triangle!.");          // Print "Impossible to create a triangle!" on the screen
  }                                                       // Close IF Statement
}                                                         // Terminate a program
