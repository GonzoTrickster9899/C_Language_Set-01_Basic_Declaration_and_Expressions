#include <stdio.h>
//------------------------------------------------------------------------------//
//  Basic #013:                                                                 //
//    Write a C program that accepts three integers and find the maximum of     //
//    three.                                                                    //
//------------------------------------------------------------------------------//
int main(){                                                     // Start a program
  int num1, num2, num3;                                         // Declare integer num1, num2, and num3
  printf("Input the first integer: ");                          // Input the first number num1
  scanf("%d", &num1);                                           // Read the first number num1 that you inputted
  printf("Input the second integer: ");                         // Input the second number num2
  scanf("%d", &num2);                                           // Read the second numner num2 that you inputted
  printf("Input the third integer: ");                          // Input the third number num3
  scanf("%d", &num3);                                           // Read the third number num3 that you inputted
  if(num1>num2){                                                // IF Statement: If num1 is greater than num2
    if(num1>num3){                                              // If true, then if num1 is greater than num3 (goes to the inner IF Statement)
      printf("\nMaximum value of three integers: %d\n",num1);   // If true, then the maximum number of three integers is num1 which print the value on the screen
    }else{                                                      // If not...
      printf("\nMaximum value of three integers: %d\n",num3);   // Then, the maximum number of three integers is num3 which print the value on the screen
    }                                                           // Close Inner IF Statement
  }else{                                                        // If not...
    if(num2>num3){                                              // then, if num2 is greater than num3
      printf("\nMaximum value of three integers: %d\n",num2);   // Then, the maximum number of three integers is num2 which print the value on the screen
    }else{                                                      // If not...
      printf("\nMaximum value of three integers: %d\n",num3);   // Then, the maximum number of three integers is num3 which print the value on the screen
    }                                                           // Close Inner IF Statement
  }                                                             // Close IF Statement
}                                                               // Terminate a program
