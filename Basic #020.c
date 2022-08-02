#include <stdio.h>
#include <math.h>
//----------------------------------------------------------------------------------------//
//  Basic #020:                                                                          //
//    Write a C program to print the roots of Bhaskara's formula from the given           //
//    three floating numbers. Display a message if it is not possible to find the roots.  //
//----------------------------------------------------------------------------------------//
  int main(){                                     // Start a program
  float a, b, c, root1, root2, discriminant;      // Declare the float a, b, c, root1, root2, discriminanat
  printf("Input the first number (a): ");         // Input the first number a
  scanf("%f", &a);                                // Read the first number a that you inputted
  printf("Input the second number (b): ");        // Input the second number b
  scanf("%f", &b);                                // Read the second number b that you inputted
  printf("Input the third number (c): ");         // Input the third number c
  scanf("%f", &c);                                // Read the third number c that you inputted
  discriminant = (b*b)-(4*a*c);                   // Formulate to get discriminant
  if(discriminant>0 && a!=0){                     // IF Statement: If discriminant is greater than 0 and the first number a is not equal to 0
    root1=(-b+sqrt(discriminant))/(2*a);          // Use the Bhaskara's formula (positive) to get root1
    root2=(-b-sqrt(discriminant))/(2*a);          // Use the Bhaskara's formula (negative) to get root2
    printf("\nRoot1 = %.5f", root1);              // Print root1 on the screen
    printf("\nRoot2 = %.5f\n", root2);            // Print root2 on the screen
  }else{                                          // If not...
    printf("\nImpossible to find the roots.\n");  // Print "Impossible to find the roots/" on the screen
  }                                               // Close IF Statement
}                                                 // Terminate a program
