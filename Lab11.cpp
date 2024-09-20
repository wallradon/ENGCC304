
#include <stdio.h>

int Armstrong( int num ) ;

int main() {
    int num_main = 0;
    printf( "--------------------\n" ) ;
    printf( "Enter Number : " ) ;
    scanf( "%d", &num_main) ;
    printf( "--------------------\n" ) ;
    Armstrong( num_main ) ;
    return 0 ;
}//end main function

int Armstrong( int num ) {
    int selec = 0, sum = 0, check = 0 ;

    check = num ;

    while (num)
    {
        selec = num % 10 ;  //เอามาคำนวณ
        sum += selec * selec * selec ; 
        num = num / 10 ; //เอามันออกไป
        printf( "selected = %d\n", selec ) ;
        printf( "Sum = %d\n", sum ) ;
        printf( "Num = %d\ntemp : %d\n--------------------\n", num, check ) ;
    }//end while
   
    if ( check == sum ) { 
        printf( "%d is pass\n--------------------\n", check ) ;
    }else{
        printf( "%d is No pass\n--------------------\n", check ) ;
    }//end if
    return 0 ;
}//end Armstrong function
