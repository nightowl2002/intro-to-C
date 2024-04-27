// jatin4@Myseneca.ca
// Jatin
// 149244220
// November 19 2023

// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#ifndef SENECA_REPORT_H
#define SENECA_REPORT_H

struct Student {
    float mark;          // to hold the mark of the student
    int stNo;            // to hold the student number
    char name[31];       // to hold the student name up to 30 characters in a Cstring
};

int getInt(void);
float getFlt(void);
void getLine(char cstr[]);
struct Student getStudent(void);
void printStudent(struct Student S);
void printReport(const struct Student S[], int num);
void readStudentInfo(struct Student S[], int num);

#endif // !SENECA_REPORT_H
