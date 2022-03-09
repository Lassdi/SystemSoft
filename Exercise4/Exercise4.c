#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//3
int negativeCount = 0;
int inputInteger = 0;
int sum = 0;
int divisible = 0;

//4A
int randomInt = 0;

//4B
int grade = 0;

//4A
void range(){
    
    srand(time(0));
    printf("Enter a lower limit \n");
    int lowerLim = 0;
    scanf("%d", &lowerLim);
    
    printf("Enter an upper limit \n");
    int upperLim = 0; 
    scanf("%d", &upperLim);
    
    randomInt = (rand() % (upperLim - lowerLim + 1)) + lowerLim;
    if(lowerLim >= upperLim){
        printf("The lower limit cannot be bigger than or equal to the upper limit!\n");
    }else{
        printf("You picked a range of %d - %d, your number was %d\n", lowerLim, upperLim, randomInt);
    }
    
}

//4B
int points(){
    if(randomInt < 60){
        grade = 0;
        printf("Your grade = %d \n", grade);
        
    }else if(randomInt < 72){
        grade = 1;
        printf("Your grade = %d \n", grade);
        
    }else if(randomInt < 84){
        grade = 2;
        printf("Your grade = %d \n", grade);
        
    }else if(randomInt < 96){
        grade = 3;
        printf("Your grade = %d \n", grade);
        
    }else if(randomInt < 108){
        grade = 4;
        printf("Your grade = %d \n", grade);
        
    }else if(randomInt <=120){
        grade = 5;
        printf("Your grade = %d \n", grade);
        
    }
}
void primeCheck(){
    
    int state = 0;//state is either 0 if number is not prime and 1 if number is prime

    printf("Enter a positive integer = ");
    int userInput = 0;
    if(scanf("%d", &userInput)){
    
        if(userInput < 0){
            printf("Input cannot be negative!\n");
            exit(1);
        }
        if(userInput == 0 || userInput == 1){
            state = 0; //state is 0 if number is not prime
        }else if(userInput == 2 || userInput == 3){
            state = 1; //state is 1 if number is prime
        }
        for(int i = 2; i <= userInput/2; i++){
            if(userInput % i == 0){
                state = 0;
            }else if(userInput % 1 == 0 && userInput % userInput == 0){
                state = 1;
            }  
        }
        if(state == 0){
            printf("Your number is not prime\n");
        }else if(state == 1){
            printf("Your number is prime\n");
        }

    
    }else{ //if user input is not an integer
        printf("Input an integer!\n");
    }

}



int main()
{
    //3
    printf("Input an integer\n");
    
    while(scanf("%d", &inputInteger) != 0){
    
        if(inputInteger == 0){
            printf("Program ended, there was %d negative integers\n", negativeCount);
            printf("sum = %d\n", sum);
            printf("sum of integers divisible by 3 = %d \n", divisible);
            break;
        }
        else if(inputInteger < 0){
            negativeCount++;
        }
        else if(inputInteger % 3 == 0 && inputInteger > 0){
            divisible = divisible + inputInteger;
        }
        sum = sum + inputInteger;
    }
    
    
    //4A
    range();
    
    //4B
    points();
    
    //5B
    primeCheck();
    
}