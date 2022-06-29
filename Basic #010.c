#include <stdio.h>

//----------------------------------------------------------------------------------//
//  Array #010:                                                                     //
//    Write a program in C to separate odd and even integers in separate arrays     //
//----------------------------------------------------------------------------------//

int main(){                                                           // Start a program
  int size=100, array[size], odd[size], even[size], i, j=0, k=0;      // Declare the integers size with maximum of 100, array[size], odd{size]. even[size], index i, j and k
  printf("Input the number of elements to be stored in the array: "); // Input the number of elements to be stored in the array
  scanf("%d", &size);                                                 // Read the number of elements that you inputted
  printf("\nInput the %d element in the array: \n", size);            // Print "Input the x elements in the array:" on the screen between two space lines
  for(i=0; i<size; i++){                                              // Start For Loop to input element of each index in the array
    printf("element - %d : ", i);                                     // Input element of each index in the array
    scanf("%d", &array[i]);                                           // Read the elements that you input
  }                                                                   // Close For Loop
  for(i=0; i<size; i++){                                              // Start For Loop to determine which is even or odd elements
    if(array[i]%2==0){                                                // IF Statement: If the array[i] divide by 2 is remainder 0
      even[j]=array[i];                                               // If true, array[i] will become even[j]
      j++;                                                            // Increment the index j by 1
    }else{                                                            // If not
      odd[k]=array[i];                                                // Array[i] wi;; become odd[k]
      k++;                                                            // Increment the index k by 1
    }                                                                 // Close IF Statements
  }                                                                   // Close For Loop
  printf("The Even elements are: \n");                                // Print "The Even elements are:" on the screen before space line
  for(j=0;j<size-k;j++){                                              // Start For Loop to print even elements
    printf("%d ",even[j]);                                            // Print even elements on the screen
  }                                                                   // Close For Loop
  printf("\nThe Odd elements are: \n");                               // Print "The Odd elements are:" on the screen between two space lines
  for(k=0;k<size-j;k++){                                              // Start For Loop to print odd elements
    printf("%d ", odd[k]);                                            // Print odd elements on the screen
  }                                                                   // Close For Loop
}                                                                     // Terminate a program
