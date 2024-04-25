// mmohamed100@Myseneca.ca
// Mohamed Mohamed
// 149244220
// Mar 19 2024

// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#include <stdio.h>
#include "report.h"
#include "utils.h"
#include <string.h>

struct Student getStudent(void) {
    struct Student newStudent;

    printf("Name\n> ");
    getLine(newStudent.name);

    printf("Student Number\n> ");
    newStudent.stNo = getInt();

    printf("Mark\n> ");
    newStudent.mark = getFlt();

    return newStudent;
}

void printStudent(struct Student S) {
    printf("%-30s| %-15d| %5.1f\n", S.name, S.stNo, S.mark);
}

void printReport(const struct Student S[], int num) {
    printf("Name                           student number   mark\n");
    printf("------------------------------+----------------+------\n");

    float totalMark = 0.0;
    int i;
    for (i = 0; i < num; ++i) {
        printStudent(S[i]);
        totalMark += S[i].mark;
    }

    printf("------------------------------+----------------+------\n");
    printf("           %36s %6.1f\n", "Average:", totalMark / num);
}

void readStudentInfo(struct Student S[], int num) {
    printf("Enter %d student records:\n", num);
    int i;
    for (i = 0; i < num; ++i) {
        printf("Enter Student Information # %d:\n", i + 1);
        S[i] = getStudent();
    }
}
