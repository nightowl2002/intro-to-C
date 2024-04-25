#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//  I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
void flushKey( void ) {
   char ch;
   do {
      ch = getchar( );
   } while ( ch != '\n' );
}

int getInt( ) {
   int num;
   scanf( "%d", &num );
   flushKey( );
   return num;
}

double getDbl( ) {
   double num;
   scanf( "%lf", &num );
   flushKey();
   return num;
}