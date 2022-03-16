/*
Author:                 Lassi Lahti
File:                   Excercise5.c
Description:            armstrong numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


// 3b
void isArmstrong()
{
    int inputNum = 0;
    int temporary = 0;
    int remain = 0;
    int sum = 0;
    
    printf("Give me a number: ");
    scanf("%d", &inputNum);
    printf("The number was: %d\n", inputNum);
    
    temporary = inputNum; //storing the initial input number to a temporary variable

    while(inputNum > 0) //splitting the number using remainders
    {
        remain = inputNum % 10;
        sum = sum + pow(remain, 3);
        inputNum = inputNum/10;
    }
    if(sum == temporary || (temporary >= 1 && temporary <= 9))
    {
        printf("%d is an Armstrong number!\n", temporary);
    }
    else
    {
        printf("%d is not an Armstrong number!\n", temporary);
    }
}
//4a
void filledArray()
{
    printf("filled array start");
    int filled[10] = {12, 53, 26, 94, 1, 78, 67, 49, 86, 100};
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", filled[i]);
    }
}

//4b
void emptyArray()
{
    
    printf("Random array start:\n");
    srand(time(0));
    int empty[10];
    
    
    for(int j = 0; j < 10; j++)
    {
        empty[j] = rand()%1000000;
        printf("%d\n", empty[j]);
    }
}
// 3a    
int value = 0;

int main(int argc, char *argv[])
{
    //3a
    value = atoi(argv[1]);
    
    if(argc > 2)
    {
        printf("Too many arguments, please give only one integer! \n");
    }
    if(value >= 0 && value <= 10000000)
    {
        printf("You gave me the number: %d \n", value);
    }
    else if(value > 10000000)
    {
        printf("Value over limit!\n");
    }
    else if(value < 0)
    {
        printf("Do not use negative integers!\n");
    }
    
    //3b
    isArmstrong();
    
    //4a
    filledArray();
    
    //4b
    emptyArray();

    return 0;
}
