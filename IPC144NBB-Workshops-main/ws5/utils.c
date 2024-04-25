#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include <string.h>


int getInt(void) {
    int num;
    char term;

    while (scanf("%d%c", &num, &term) != 2 || term != '\n') {
        while (getchar() != '\n');
        printf("Bad integer, try again\n> ");
    }

    return num;
}

float getFlt(void) {
    float num;
    char term;

    while (1) {
        if (scanf("%f%c", &num, &term) != 2 || term != '\n') {
            while (getchar() != '\n');
            printf("Bad real number, try again\n> ");
        } else if (num < 0.0 || num > 100.0) {
            printf("Bad mark, try again\n> ");
        } else {
            printf("----------------------\n"); 
            break;
        }
    }

    return num;
}

void getLine(char cstr[]) {
    fgets(cstr, 31, stdin);
    if (cstr[strlen(cstr) - 1] == '\n')
        cstr[strlen(cstr) - 1] = '\0'; 
    else
        while (getchar() != '\n'); 
}