#include "report.h"
#include "marks.h"
#include "utils.h"
#include <stdio.h>

// Mohamed Mohamed
// mmohamed100@Myseneca.ca
// 149244220
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

void report(int numberOfStudents) {
    int mark, maxMark, minMark, sumMark = 0;
    int i;
    char letterGrade;

    printf("What are the marks out of?\n> ");
    scanf("%d", &maxMark);

    for (i = 1; i <= numberOfStudents; i++) {
        while (1) {
            printf("%d- Please print a mark between 0 and %d:\n> ", i, maxMark);
            scanf("%d", &mark);

            if (mark >= 0 && mark <= maxMark) {
                break;
            } else {
                printf("Invalid mark! Try again.\n");
            }
        }

        letterGrade = grade(mark);
        sumMark += mark;

        printf("Entered: %d%%, %c\n", mark * 100 / maxMark, letterGrade);

        if (i == 1) {
            minMark = mark;
            maxMark = mark;
        } else {
            if (mark < minMark) {
                minMark = mark;
            }
            if (mark > maxMark) {
                maxMark = mark;
            }
        }
    }

    float avgMark = (float)sumMark / numberOfStudents;
    printf("Lowest mark entered: %d\n", minMark);
    printf("Highest mark entered: %d\n", maxMark);
    printf("Average of all marks: %.1f%%\n", avgMark);
}