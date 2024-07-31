#include <stdio.h>
int main() {
    char Oper;
    float Num1, Num2 ;
    printf( "Calculator : ") ;
    scanf( "%f %c %f", &Num1, &Oper, &Num2 ) ;
    switch( Oper ) {
        case '+':
                printf( "%.0f + %.0f = %.0f", Num1, Num2, Num1 + Num2 ) ;
                break ;
        case '-':
                printf( "%.0f - %.0f = %.0f", Num1, Num2, Num1 - Num2 ) ;
                break ;
        case '*':
                printf( "%.0f * %.0f = %.0f", Num1, Num2, Num1 * Num2 ) ;
                break ;
        case '/':
                printf( "%.0f / %.0f = %.0f", Num1, Num2, Num1 / Num2 ) ;
                break ;
        default : 
                printf( "Error, please try again" ) ;
                break ; 
    }//end switch
}//end function
