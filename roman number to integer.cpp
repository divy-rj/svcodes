#include<stdio.h>

#include<string.h>

int digit(char);

int main(){

    char roman_Number[1000];

    int j=0;

    int number =0;

    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");

    scanf("%s",roman_Number);

    while(roman_Number[j]){

        if(digit(roman_Number[j]) < 0){

            printf("Invalid roman digit : %c",roman_Number[j]);

            return 0;

        }

        if((strlen(roman_Number) -j) > 2){

            if(digit(roman_Number[j]) < digit(roman_Number[j+2])){

                printf("Invalid roman number");

                return 0;

            }

        }

        if(digit(roman_Number[j]) >= digit(roman_Number[j+1]))

            number = number + digit(roman_Number[j]);

        else{

            number = number + (digit(roman_Number[j+1]) - digit(roman_Number[j]));

            j++;

        }

        j++;

    }

    printf("Its decimal value is : %d",number);

    return 0;

}

int digit(char c){

    int value=0;

    switch(c){

        case 'I': value = 1; break;

        case 'V': value = 5; break;

        case 'X': value = 10; break;

        case 'L': value = 50; break;

        case 'C': value = 100; break;

        case 'D': value = 500; break;

        case 'M': value = 1000; break;

        case '\0': value = 0; break;

        default: value = -1;

    }

    return value;

}
