#include <stdio.h>

//------------------------------------------------------------------------------------------//
//  Basic #019:                                                                             //
//    Write a C program that accepts 4 integers p,q,r,s from the user where r and           //
//    s are positive and p is even. If q is greater than r and s is greater than p and if   //
//    the sum of r and s is greater than the sum of p and q print "Correct values".         //
//------------------------------------------------------------------------------------------//

int main(){                                                 // Start a program
  int p, q, r, s ;                                          // Declare the integers first p, second q, third r, and fourth s integers.
  printf("Input the first integer: ");                      // Input the first p integer
  scanf("%d", &p);                                          // Read the first p intger that you inputted
  printf("Input the second integer: ");                     // Input the second q integer
  scanf("%d", &q);                                          // Read the second q that you inputted
  printf("Input the third integer: ");                      // Input the third r integer
  scanf("%d", &r);                                          // Read the third r intger that you inputted
  printf("Input the fourth integer: ");                     // Input the fourth s integer
  scanf("%d", &s);                                          // Read the fourth s integer that you inputted
  if(r>=0 && s>=0 && p%2==0 && q>r && s>p && r+s>p+q){      // IF Statement: If r and s are positive, if p is even, if q and s is greater than r and p respectively, and if r+s is greater than p+q
    printf("\nCorrect values.\n");                          // If all of these are true, then print Correct values on the screen
  }else{                                                    // If not...
    printf("\nWrong values.\n");                            // Then, print Wrong values on the screen
  }                                                         // Terminate a program
}
