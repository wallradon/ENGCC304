#include <stdio.h>

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ;
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &Age ) ;
    printf( "- - - - - -\n" ) ;
    printf( "Hello %s \n", Name ) ; //TODO: #14 Say hello to user.
    printf( "Age = %d\n", Age + 1 ) ; //TODO: #15 display user their age number plus 1.
}//end main function
