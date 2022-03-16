/*
Author:         Lassi Lahtoi
File:           ExercisePart1.c
Description:    Sequence of numbers
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int num = 0;
int firstNum = 0;
int secondNum = 1;
int thridNum = 2;
int sum = 0;
int count = 0;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d\t%d\t%d\t", firstNum, secondNum, thridNum);
    count = 3;
    
    while(count < num)
    {
        sum = firstNum + secondNum + thridNum;
        printf("%d\n", sum);
        firstNum = secondNum;
        secondNum = thridNum;
        thridNum = sum;
        count = count + 1;
    }
    return 0;
}
