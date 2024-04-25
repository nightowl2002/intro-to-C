// Mohamed Mohamed
// mmohamed100@myseneca.ca
// 149244220
// Jan 30 2024
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <stdio.h>

double getDouble(void);
int getInt(void);
double calculateAverageMark(void);
int main(void) {
   printf("---===<<<  Students Marks Average Calculator >>>===---\n\n");
   double result = calculateAverageMark();
printf("Your average mark is: %.1lf\n", result);
   return 0;
}