/*
File:           Exercise3.c
Author:         Lassi Lahti
Description:    System Software exercise 3
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int sum = 0;
int sumOfEven = 0;



int main() {
    for(int i = 1; i <= 1000; i++){
        sum = sum + i;
    
    }
    for(int j = 2; j <=1000; j+=2){
        sumOfEven += j;
    }

    printf("The sum of numbers 1-1000 is: %d \n", sum);
    printf("The sum of even numbers is: %d \n", sumOfEven);
    
    
    srand(time(0));
    int round = 0;
    int lower = 2, upper = 20;
    int random = (rand()%(upper-lower + 1))+ lower;
    while(random <= 2147483647){
        round++;
        printf("Round %d: %d\n",round, random);
        random = random*random;
        if(random == 0){
            break;
        }else if (random == 1){
            break;
        }
    }
    
/*
    srand(time(0));
    int lower = 0, upper = 100;
    int random = (rand()%(upper-lower +1))+lower;
    int count = 0;

    printf("Your random number is: %d \n", random);

    while(random != 1){
        count++;
        if(random % 2 == 0){
            random = random / 2;
            printf("%d\n",random);
        }else if (random % 2 != 0){
            random = 3*random +1;
            printf("%d\n", random);
        }
        if(random == 1){
            printf("The length of the sequence was: %d \n", count);
        }else if(random == 0){
            printf("The number was 0, sequence stopped \n");
            break;
        }
    }*/
}
