#include <stdio.h>

int funcForNumberInversion(int numberBeingInverted){
    if (numberBeingInverted==0){
        return numberBeingInverted;
    }else{
        printf("%d", numberBeingInverted%10);
        numberBeingInverted = numberBeingInverted/10;
        return funcForNumberInversion(numberBeingInverted);
    }
}    

int main(){
    int valueToBeInverted;
    printf("Welcome to the exercise that make a integer number inversion in C.\n");
    printf("\nInclude a value to be inverted: ");
    scanf("%d", &valueToBeInverted);
    funcForNumberInversion(valueToBeInverted);
}