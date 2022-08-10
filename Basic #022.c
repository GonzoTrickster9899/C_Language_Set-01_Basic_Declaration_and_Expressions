#include <stdio.h>
//----------------------------------------------------------------------//
//  Basic #022:                                                         //
//    Write a C program that read 5 numbers and sum all odd values      //
//  between them.                                                       //
//----------------------------------------------------------------------//

int main(){                                       // Start a program
  int num[5],i,sum=0;                             // Declare integers 5 numbers, index i, sum=0
  printf("Input the first number: ");             // Input the first number
  scanf("%d", &num[0]);                           // Read tht first numner that you inputted
  printf("Input the second number: ");            // Input the second number
  scanf("%d", &num[1]);                           // Read the second number that you inputted
  printf("Input the third number: ");             // Input the third number
  scanf("%d", &num[2]);                           // Read the third number that you inputtted
  printf("Input the fourth number: ");            // Input the fourth number
  scanf("%d", &num[3]);                           // Read the fourth number that you inputted
  printf("Input the fifth number: ");             // Input the fifth number
  scanf("%d", &num[4]);                           // Read the fifth number that you inputted
  for(i=0;i<5;i++){                               // Start For Loop to determine if the numbers are odd
    if(num[i]%2==1){                              // IF Statement: If num[i] is odd number
      sum += num[i];                              // Then, add to the sum
    }                                             // Close IF Statement
  }											                      		// Close For Loop
  printf("\nSum of all odd values: %d\n", sum);   // Print the sum on the screen
}													                      	// Terminate a program
