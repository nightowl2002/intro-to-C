#include <stdio.h>
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
void rectangle(char leftTop, char top, char topRight,
   char right, char rightButtom, char buttom,
   char buttomLeft, char left, char fill,
   int width, int height) {

    int i, j;


    printf("%c", leftTop);
    for (i = 2; i < width; i++) {
        printf("%c", top);
    }
    printf("%c\n", topRight);

    
    for (i = 2; i < height; i++) {
        printf("%c", left);
        for (j = 2; j < width; j++) {
            printf("%c", fill);
        }
        printf("%c\n", right);
    }

   
    printf("%c", buttomLeft);
    for (i = 2; i < width; i++) {
        printf("%c", buttom);
    }
    printf("%c\n", rightButtom);
}
