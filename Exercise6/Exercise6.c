/*
Author:                 Lassi Lahti
File:                   Excercise5.c
Description:            pointers and arrays
*/

#include <stdio.h>
#include <stdlib.h>

int first = 23;
char second = 'S';
float third = 2.36;

int *pointerFirst = &first;
char *pointerSecond = &second;
float *pointerThird = &third;

int main()
{
    printf("The integer value is: %d. Chosen character: %c. float value: %f\n", first, second, third);
    
    printf("Memory address of the integer value: %p, memory address of character value: %p, memory address of float value: %p\n", pointerFirst, pointerSecond, pointerThird);
    
    printf("Value using memory address, integer: %d, character: %c, float: %f\n", *pointerFirst, *pointerSecond, *pointerThird);
    
    
    return 0;
}
