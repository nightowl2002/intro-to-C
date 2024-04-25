// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <stdio.h>
#include <math.h>

void title(void); // introduces the title function
void line(void);
void name(void);
void average(void);
int main(void){
title();  // runs the title function
line();
name();
line();
average();
line();
return 0;
}

void title(void){ // what the title function is going to do

    printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}

void line(void){
    printf("------------------------------------------------------------\n");

}

void name(void){
    printf("Name:\n\t");
    printf("Fred Soley\n");
    printf("Email:\n\t");
    printf("fsoley@myseneca.ca\n");
}

void average(void){
    int ipc, uli, eac, averageGrade;
    printf("Enter the marks for the following subjects,\n");
    printf("IPC144: ");
    scanf("%d", &ipc);
    printf("ULI101: ");
    scanf("%d", &uli);
    printf("EAC150: ");
    scanf("%d", &eac);
    averageGrade = (ipc + uli + eac)/3;
    printf("The average is: %d\n", averageGrade);


}