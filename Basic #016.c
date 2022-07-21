#include <stdio.h>
//----------------------------------------------------------------------------------//
//  Basic #016:                                                                     //
//    Write a C program to read an amount (integer value and break the amount       //
//    into smallest possible number of bank notes.                                  //
//----------------------------------------------------------------------------------//

int main(){                                                                   // Start a program
  int amount, note100, note50, note20, note10, note5, note2, note1, rnote;    // Declare integers amount, note10, note50, note20, note10, note5, note2, note1, rnote.
  printf("Input the amount: ");                                               // Input the amount
  scanf("%d", &amount);                                                       // Read the amount that you inputted
  note100=amount/100;                                                         // To get note100, divide from amount to 100
  rnote=amount%100;                                                           // To get remained note rnote, modulate from amount to 100
  note50=rnote/50;                                                            // To get note50, divide from remained note rnote to 50
  rnote=rnote%50;                                                             // To get remained note rnote, modulate from rnote to 50
  note20=rnote/20;                                                            // To get note20, divide from remained note rnote to 20
  rnote=rnote%20;                                                             // To get remained note rnote, modulate from rnote to 20
  note10=rnote/10;                                                            // To get note10, divide from remained note rnote to 10
  rnote=rnote%10;                                                             // To get remained note rnote, modulate from rnote to 10
  note5=rnote/5;                                                              // To get note5, divide from remained note rnote to 5
  rnote=rnote%5;                                                              // To get remained note rnote, modulate from rnote to 5
  note2=rnote/2;                                                              // To get note2, divide from remained note rnote to 2
  rnote=rnote%2;                                                              // To get remained note rnote, modulate from rnote to 2
  note1=rnote;                                                                // Equalize the rnote into note1
  printf("\nThere are:");                                                     // Print "There are:" on the screen
  printf("\n%d Note(s) of 100.00.", note100);                                 // Print the number of 100-notes on the screen
  printf("\n%d Note(s) of 50.00.", note50);                                   // Print the number of 50-notes on the screen
  printf("\n%d Note(s) of 20.00.", note20);                                   // Print the number of 20-notes on the screen
  printf("\n%d Note(s) of 10.00.", note10);                                   // Print the number of 10-notes on the screen
  printf("\n%d Note(s) of 5.00.", note5);                                     // Print the number of 5-notes on the screen
  printf("\n%d Note(s) of 2.00.", note2);                                     // Print the number of 2-notes on the screen
  printf("\n%d Note(s) of 1.00.\n", note1);                                   // Print the number of 1-note on the screen
}                                                                             // Terminate a program
