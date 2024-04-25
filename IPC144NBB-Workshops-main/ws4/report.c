// mmohamed100@Myseneca.ca
// Mohamed Mohamed
// 149244220
// Mar 19 2024

// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <stdio.h>
#include "report.h"
#include "utils.h"


void readStudentInfo(int stno[], float mark[], int num) {
    int i;
    printf("Enter %d student records:\n", num);
    for (i = 0; i < num; i++) {
        printf("Enter Student Information # %d:\n", i + 1);
        printf("Student Number\n> ");
        scanf("%d", &stno[i]);
        printf("Mark\n> ");
        scanf("%f", &mark[i]);
        printf("----------------------\n");
    }
}

void printReport(const int stno[], const float mark[], int num) {
    int i;
    float total = 0.0;
    printf("student number   mark\n");
    printf("---------------+------\n");
    for (i = 0; i < num; i++) {
        printf("%-15d|  %.1f\n", stno[i], mark[i]);
        total += mark[i];
    }
    printf("---------------+------\n");
    printf("       Average:   %.1f\n", total / num);
}
