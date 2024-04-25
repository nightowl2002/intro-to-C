#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Mohamed Mohamed 
// mmohamed100@Myseneca.ca
// 149244220
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

void prnGrade(char letterGrade) {
  if (letterGrade == '+') {
    printf("A+");
  } else {
    printf("%c", letterGrade);
  }
}


char grade(int markOutOf100){
char grd;
if  (markOutOf100 > -1 && markOutOf100 < 50){
  grd = 'F';
} else if (markOutOf100 > 49 && markOutOf100 < 60){
  grd = 'D';
} else if (markOutOf100 > 59 && markOutOf100 < 70){
  grd = 'C';
} else if (markOutOf100 > 69 && markOutOf100 < 80){
  grd = 'B';
} else if (markOutOf100 > 79 && markOutOf100 < 90){
  grd = 'A';
} else if (markOutOf100 > 89 && markOutOf100 < 101){
  grd = '+';
} else {
  grd = 'X';
}
  return grd;
}

int getNoOfStudents(void){
int numStudents;

printf("Please enter the number of students\n> ");
scanf("%d", &numStudents);

if  (numStudents < 5){
  printf("Minimum number of students is 5!\n");
  numStudents = 0;
} else if (numStudents > 35) {
  printf("Maximum number of students is 35!\n");
  numStudents = 0;
}
  return numStudents;
}

int getMark(int maximumAcceptableMarkValue){
  int mark;

  printf("Please print a mark between 0 and %d:\n> ", maximumAcceptableMarkValue);
  scanf("%d", &mark);
  if  (mark < 0 || mark > maximumAcceptableMarkValue){
    printf("Invalid Mark!\n");
    return -1;
  } else {
  mark = mark * 100 / maximumAcceptableMarkValue;
  } 
  return mark;
}
  
