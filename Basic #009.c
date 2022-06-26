#include <stdio.h>
//----------------------------------------------------------------------------------//
//  Basic #009:                                                                     //
//    Write a C program that accepts two intgers from the user and calculate the    //
//    sum of the two integers.                                                      //
//----------------------------------------------------------------------------------//

int main(){                                               // Start a program
  int num1, num2, sum;                                    // Declare the integers num1, num2, and sum
  printf("Input the first integer: ");                    // Input the first integer num1
  scanf("%d", &num1);                                     // Read the first integer num1 that you inputted
  printf("Input the second integer: ");                   // Input the second integer num2
  scanf("%d", &num2);                                     // Read the second integer num2 that you inputted
  sum=num1+num2;                                          // To get sum, add num1 and num2
  printf("\nSum of the above two integers = %d\n", sum);  // Print the sum on the screen
}                                                         // Terminate a program
