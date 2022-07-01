#include <stdio.h>
//--------------------------------------------------------------------------------------//
//  Basic #011:                                                                         //
//    Write a C program that accepts two item's weight(floating poins' values)          //
//  and number of purchase (floating points' values) and calculate the average value    //
//  of the items.                                                                       //
//--------------------------------------------------------------------------------------//
int main(){                                                 // Start a program
  double weight1, item1, weight2, item2, average;           // Declare doubles weight1, item1, weight2, item2, average
  printf("Weight - Item1: ");                               // Input the weight of each item1
  canf("%lf", &weight1);                                    // Read the weight of each item1 that you inputted
  printf("No. of item1: ");                                 // Input the number of item1
  scanf("%lf", &item1);                                     // Read the number of item1 that you inputted
  printf("Weight - Item2: ");                               // Input the weight of each item2
  scanf("%lf", &weight2);                                   // Read the weight of each item2 that you inputted
  printf("No. of item2: ");                                 // Input the number of item2
  scanf("%lf", &item2);                                     // Read the number of item2 that you inputted
	
  average=((weight1*item1)+(weight2*item2))/(item1+item2);  // To get average value, multiply weight1 and item1, multiply weight2 and item2, add the two products, then get the average by the total number of items
  printf("\nAverage Value = %f", average);                  // Print the average on the screen
}
