#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "marks.h"

// Mohamed Mohamed 
// mmohamed100@Myseneca.ca
// 149244220
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include "marks.h"
#include "utils.h"
#include <stdio.h>

void prnGrade(char letterGrade)
{
    if (letterGrade == '+') {
        printf("A+");
    } else {
        printf("%c", letterGrade);
    }
}

char grade(int markOutOf100)
{
    char grd = 'X';
    if (markOutOf100 >= 0 && markOutOf100 < 50) {
        grd = 'F';
    } else if (markOutOf100 >= 50 && markOutOf100 < 60) {
        grd = 'D';
    } else if (markOutOf100 >= 60 && markOutOf100 < 70) {
        grd = 'C';
    } else if (markOutOf100 >= 70 && markOutOf100 < 80) {
        grd = 'B';
    } else if (markOutOf100 >= 80 && markOutOf100 < 90) {
        grd = 'A';
    } else if (markOutOf100 >= 90 && markOutOf100 <= 100) {
        grd = '+';
    }
    return grd;
}

int getNoOfStudents(void)
{
    int numStudents;
    printf("Please enter the number of students\n> ");
    numStudents = getIntInRange(5, 35);
    return numStudents;
}

int getMark(int maximumAcceptableMarkValue)
{
    int mark;
    printf("Please print a mark between 0 and %d value:\n> ", maximumAcceptableMarkValue);
    mark = getIntInRange(0, maximumAcceptableMarkValue);
    return mark;
}

int getIntInRange(int min, int max) {
    int num;
    while (1) {
        scanf("%d", &num);
        if (num >= min && num <= max) {
            break;
        }
        if (num < min) {
            printf("Minimum number of students is %d!\n", min);
        } else {
            printf("Maximum number of students is %d!\n", max);
        }
    }
    return num;
}