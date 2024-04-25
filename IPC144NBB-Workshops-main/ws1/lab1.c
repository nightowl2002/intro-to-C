//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <stdio.h>

void title(void); // introduces the title function
void line(void);
void name(void);
int main(void){
title();  // runs the title function
line();
name();
line();
return 0;
}

void title(void){ // what the title function is going to do

    printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
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