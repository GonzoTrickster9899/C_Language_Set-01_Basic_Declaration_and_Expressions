#include <stdio.h>
//----------------------------------------------------------------------------------//
//  Basic #012:                                                                     //
//    Write a C program that accepts an employee's ID, total worked hours of a      //
//    month and the amounr he received per hour. Print the employee's ID and salary //
//    (with two decimal places) of a particular month.                              //
//----------------------------------------------------------------------------------//
int main(){                                               // Start a program
  char id[10];                                            // Declare characters id with the maximum length of 10
  int hours;                                              // Declare integers hours
  float salary, tsalary;                                  // Declare float salary and tsalary
  printf("Input the employee's ID (Max 10 chars): ");     // Input the employee's ID
  scanf("%d", &id);                                       // Read the employee's ID that you inputted
  printf("Input the working hours: ");                    // Input the working hours
  scanf("%d", &hours);                                    // Read the working hour that you inputted
  printf("Salary amount per hour: ");                     // Input the amount per hour
  scanf("%f", &salary);                                   // Read the amount per hour that you inputted
  tsalary=hours*salary;                                   // To get tsalary, multiply the hours and salary
  printf("\nEmployee's ID = %d\n", id);                   // Print the employee's ID on the screen
  printf("Salary = U$ %.2f", tsalary);                    // Print the U$ salary on the screen
}                                                         // Terminate a program
