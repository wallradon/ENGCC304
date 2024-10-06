#include<stdio.h>
int main( ){
    int integers1 = 0, integers2 = 0 ;
    char character = 0, string[100] ;
    float floating = 0 ;
    printf( "Enter a character: \n" ) ;  
    scanf( " %c", &character ) ;
    printf( "Enter two integers: \n" ) ;  
    scanf( "%d %d", &integers1, &integers2 ) ;
    printf( "Enter a floating-point number: \n" ) ;  
    scanf( "%f", &floating ) ;
    printf( "Enter a string: \n" ) ;  
    scanf( "%s", string ) ;

    printf( "You entered character: %c\n", character ) ;
    printf( "You entered integers: %d and %d\n", integers1, integers2 ) ;
    printf( "You entered floating-point number: %.2f\n", floating ) ;
    printf( "You entered string: %s\n", string ) ;
}
