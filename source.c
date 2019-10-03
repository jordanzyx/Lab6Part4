//
// Created by Jordan on 10/3/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <time.h>

void promptInput(int *answer){
    printf("Enter your number between -100 and 100");
    scanf("%d",answer);
}

int generateNumber(){

    int a = rand() % 2;
    int b = rand() % 100;

    if(a == 1)b = -b;

    return b;
}

void respondToUser(int answer,int number){
    if(answer == number)printf("CONGRATULATIONS YOU GOT THE NUMBER CORRECT!\n");
    if(answer < -100 || answer > 100){
        printf("\n");
        return;
    }
    if(answer > number)printf("You are too high\n");
    if(answer < number)printf("You are too low!\n");
}

void play() {
    srand(time(NULL));
    int number = generateNumber();
    int answer = -1;
    while (answer != number){
        promptInput(&answer);
        respondToUser(answer,number);
    }
}
