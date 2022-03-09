/*
File:		    Exercise2.c
Author:	        Lassi Lahti
Description:	Using scanf()
*/

#include <stdio.h>

int main() {
    int FirstNumber = 0;
    int SecondNumber = 0;
    printf("Input the first integer: ");
    scanf("%d", &FirstNumber);
    printf("Input the second integer: ");
    scanf("%d", &SecondNumber);
    printf("The first number is: %d\n", FirstNumber);
    printf("The second number is: %d\n", SecondNumber);

    int difference = 0;

    if (FirstNumber > SecondNumber){
        printf("The fist number is bigger! \n");
        difference = FirstNumber - SecondNumber;
    }
    else if (FirstNumber == SecondNumber) {
        printf("The numbers are even! \n");
    }
    else if ( FirstNumber < SecondNumber) {
        printf("The second number is bigger! \n");
        difference = SecondNumber - FirstNumber;
    }

    int sum = FirstNumber + SecondNumber;
    int product = FirstNumber * SecondNumber;
    int division = 0;
    int average = FirstNumber + SecondNumber / 2;

    printf("The sum of these numbers is: %d \n", sum);
    printf("The difference between these numbers is: %d \n", difference);
    printf("The product of these two numbers is: %d \n", product);


    if (FirstNumber == 0) {
        printf("Error! Division by zero! \n");
    }
    else if (SecondNumber == 0){
        printf("Error! Division by zero! \n");
    } else {
        division = FirstNumber/SecondNumber;
        printf("The division of these two numbers is: %d \n", division);
    }

    printf("The average of these numbers is: %d \n", average);

    return 0;
}