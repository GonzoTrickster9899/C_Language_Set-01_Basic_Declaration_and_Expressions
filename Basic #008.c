#include <stdio.h>
//----------------------------------------------------------------------//
//  Basic #008:                                                         //
//    Write a C Program to convert specified days into years, weeks     //
//  and days. Note: Ignore leap year                                    //
//----------------------------------------------------------------------//

int main(){                                   // Start a program
  int ndays=1329, years, weeks, days, rdays;  // Declare integers number of days ndays of 1329, years, weeks, days and remainder days rdays
  printf("Number of days : %d \n\n", ndays);  // Print the number of days on the screen
  years=ndays/365;                            // Get the number of years from ndays
  rdays=ndays%365;                            // Get the remainder days that ndays divided by days of the year
  weeks=rdays/7;                              // Get the number of weeks from rdays
  rdays=rdays%7;                              // Get the remainder days that rdays divided by days of the week
  days=rdays;                                 // Equalize the rdays into days
  printf("Year: %d\n", years);                // Print the number of years
  printf("Weeks: %d\n", weeks);               // Print the number of weeks
  printf("Days: %d\n", days);                 // Print the number of days
}                                             // Terminate the program
