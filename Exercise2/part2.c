/*
File:			    part2.c
Author:		        Lassi Lahti
Description:		Random number generation and division
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array[10] = {12,25,38,43,51,69,70,84,96,100};

int main(){
    srand(time(0));

    int number = rand() % 100 + 0;
    printf("your number: %d\n ", number);
    
    if(number % 2 == 0){
        printf("Your number %d is even!\n", number);
    }else{
        printf("Your number %d is odd!\n", number);
    }

    if ((number % 4 == 0) && (number % 7 == 0)){
        printf("Your number is divisible by 4 and 7\n");
    }else if(number % 4 == 0){
        printf("Your number is divisible by 4 but not 7\n");
    }else if(number % 7 == 0){
        printf("Your number is divisible by 7 but not 4\n");
    }else{
        printf("Your number is not divisible by 4 and/or 7\n");
    }
    for (int i = 0; i< 10; i++){
        printf("%d\n",array[i]);
        if(array[i]== number){
            printf("Match found\n");
        }else{
            printf("No match\n");
        }
    }
    return 0;
}