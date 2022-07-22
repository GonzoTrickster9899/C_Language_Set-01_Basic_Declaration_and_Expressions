#include <stdio.h>
//--------------------------------------------------------------------------------------//
//  Basic #017:                                                                         //
//    Write a C program to convert a given integer (in seconds) to hours, minutes       //
//  and seconds.                                                                        //
//--------------------------------------------------------------------------------------//

int main(){                                                 // Start a program
  int sec, hours, minutes, seconds;                         // Declare the integers sec, hours, minutes, and seconds
  printf("Input seconds: ");                                // Input seconds
  scanf("%d", &sec);                                        // Read the seconds that you inputted
  hours = sec/3600;                                         // To get hours, divide from sec to 3600 seconds (converted from hour to seconds 60^2)
  seconds = sec%3600;                                       // To get remaining seconds, modulate from sec to 3600 seconds
  minutes = seconds/60;                                     // To get minutes, divide from remained seconds to 60 seconds (converted from minutes to seconds 60)
  seconds = seconds%60;                                     // To get seconds, modulate from remained seconds to 60 seconds
  printf("\nThere are: ");                                  // Print "There are: " on the screen
  printf("\nH:M:S - %d:%d:%d\n", hours, minutes, seconds);  // Print the hours minutes and seconds in terms of order format time
}                                                           // Terminate a program
