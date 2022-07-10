#include <stdio.h>
//--------------------------------------------------------------------------------------//
//  Basic #014:                                                                         //
//    Write a program to calculate a bike's average consumption from the given          //
//  total distance (integer value) traveled (in km) and spent fuel (in liters, float    //
//  number - 2 decimal point.                                                           //
//--------------------------------------------------------------------------------------//
int main(){                                                   // Start a program
  int km;                                                     // Declare the integers kilometers km
  float liters, average;                                      // Declare the real number liters and average
  printf("Input total distance in km: ");                     // Input the total distance in kilometers
  scanf("%d", &km);                                           // Read the total distance in kilometers that you inputted
  printf("Input total fuel spent in liters: ");               // Input the total fuel spent in liters
  scanf("%f", &liters);                                       // Read the total fuel spent in liters that you inputted
  average=km/liters;                                          // To get average consumption, divide from kilometer km to liters
  printf("\nAverage consumption (km/lt) %.3f.\n", average);   // Print the average consumption on the screen
}                                                             // Terminate a program
