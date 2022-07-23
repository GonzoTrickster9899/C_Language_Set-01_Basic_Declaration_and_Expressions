#include <stdio.h>

//----------------------------------------------------------------------------------//
//  Basic #018:                                                                     //
//    Write a C program to convert a given integer (in day) to years, months and    //
//    days, assumes that all months have 30 days and all years have 365 days.       //
//----------------------------------------------------------------------------------//

int main(){                             // Start a program
  int days, years, months;              // Declare the integers days, years and months
  printf("Input the number of days: "); // Inpute the number of days
  scanf("%d", &days);                   // Read the number of days that you inputted
  years=days/365;                       // To get years, divide from days to 365 days (which assumes that all years have 365 days)
  months=(days%365)/30;                 // To get months, modulate from days to 365 days, then divide by 30 days (which assumes that all months have 30 days)
  days=(days%365)%30;                   // To get days, modulate from days to 365 days, then modulate by 30 days
  printf("\n%d Year(s)", years);        // Print the number of years on the screen
  printf("\n%d Month(s)", months);      // Print the number of months on the screen
  printf("\n%d Day(s)\n", days);        // Prinn the number of days on the screen
}                                       // Terminate a program
