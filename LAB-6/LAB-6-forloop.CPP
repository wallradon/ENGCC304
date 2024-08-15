#include <stdio.h>
int main() {
    for( int i = 0 ; i < 10; i++ ){
        int Num_user = 0 ;
        printf( "\nPlease enter your number : " ) ;
        scanf( "%d",&Num_user ) ;
        if(Num_user % 2 == 1)
        {
            printf( "\n1 0 0 0 0\n0 1 0 0 0\n0 0 1 0 0\n0 0 0 1 0\n0 0 0 0 1\n " ) ;

        }else if (Num_user % 2 == 0)
        {
            printf( "0 0 0 0 0 1\n0 0 0 0 1 0\n0 0 0 1 0 0\n0 0 1 0 0 0\n0 1 0 0 0 0\n1 0 0 0 0 0\n" ) ;
        }//end if
   }//end for loop
   printf( "Thack you" ) ;
    return 0 ;
}//eng function
