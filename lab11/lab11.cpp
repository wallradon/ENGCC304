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
    int selec = 0, sum = 0, check = 0, count = 0, numcount = 0, power = 1  ;
    check = num ;
    numcount = num ;
    while ( numcount > 0 ) {
        numcount = numcount / 10 ;
        count++ ;
    }//end while
    printf( "count = %d\n", count ) ;
    while (num)
    {
        power = 1 ;
        selec = num % 10 ;  //เอามาคำนวณ
        for (int i = count ; i > 0 ; i-- )
        {
            power *= selec ;
            // printf( "i = %d\n ", i ) ;
        }//end for loop
        sum += power ; 
        num /= 10 ; //เอามันออกไป
        printf( "selected = %d\n", selec ) ;
        printf( "Sum | Narcissistic number = %d\n", sum ) ;
        printf( "Num = %d\ncheck : %d\n--------------------\n", num, check ) ;
    }//end while
    if ( check == sum ) { 
        printf( "%d is pass\n--------------------\n", check ) ;
    }else{
        printf( "%d is No pass\n--------------------\n", check ) ;
    }//end if
    return 0 ;
}//end Armstrong function
