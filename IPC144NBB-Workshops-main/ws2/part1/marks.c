// Mohamed Mohamed
// mmohamed100@myseneca.ca
// 149244220
// Jan 30 2024
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <stdio.h>


double getDouble(void);
int getInt(void);
double calculateAverageMark(void){
    double markTotal = 0;
    int counter = 0;
    double markValue;
    double average;
    int noOfMarks;

    printf("Please enter the number of marks\n> ");
    noOfMarks = getInt();

    while (counter < noOfMarks){
        printf("Enter mark #%d\n> ", counter + 1);
        markValue = getDouble();
        markTotal  += markValue;
        counter += 1; 
    }
    average = markTotal / noOfMarks;    
    return average;
}