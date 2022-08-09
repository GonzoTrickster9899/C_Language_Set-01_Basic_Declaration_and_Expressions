#include <stdio.h>
//----------------------------------------------------------------------------------------------//
//  Basic #021:                                                                                 //
//    Write a C program that reads an integer and check the specified range where it belongs.   //
//    Print the error message if the number is negative and greater than 80.                    //
//    Specified Range: [0,20], [21,40], [41,60], [61,80]                                        //
//----------------------------------------------------------------------------------------------//

int main(){                         // Start a program
  int num;                          // Declare the integer num
  printf("Input an integer: ");     // Input an integer num
  scanf("%d", &num);                // Read an integer num that you inputted
  if(num>=0 && num<=20){            // IF Statement: If num is greater than or equal to 0 and num is less than or equal to 20
    printf("\nRange [0,20]\n");     // Then, print "Range [0,20]" on the screen 
  }else if(num>=21 && num<=40){     // If num is greater than or equal to 21 and num is less than or equal to 40
    printf("\nRange (25, 50]\n");   // Then, print "Range (25,50]" on the screen
  }else if(num>=41 && num<=60){     // If num is greater than or equal to 41 and num is less than or equal to 60
    printf("\nRange (50,75]\n");    // Then, print "Range (50,75]" on the screen
  }else if(num>=61 && num<=80){     // If num is greater than or equal to 61 and num is less than or equal to 80
    printf("\nRange (61,80]\n");    // Then, print "Range (61,80]" on the screen
  }else{                            // If all of these are not on the range
    printf("Outside the range\n");  // Then, print "Outside the range" on the screen
  }                                 // Close Condition Statement
}                                   // Terminate a program
