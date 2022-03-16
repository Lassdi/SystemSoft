/*
Author:                 Lassi Lahti
File:                   Excercise5.c
Description:            pointers and arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[10];

int *pointerArr = NULL;

int userInput = 0;
int temporary = 0;

int *inputPointer = NULL;

int main()
{
    srand(time(0));
    printf("Please enter an integer:");
    scanf("%d", &userInput);
    
    pointerArr = &arr[0];
    for(int i = 0; i < 10; i++)
    {
        pointerArr[i] = rand()%10;
        printf("item in the array in slot %d: %d\n", i + 1, *(pointerArr+i));
        
        if(userInput == pointerArr[i])
        {
            temporary = i + 1;
        }
    }
    printf("Your number was found in the array in position: %d\n", temporary);

    return 0;
}

