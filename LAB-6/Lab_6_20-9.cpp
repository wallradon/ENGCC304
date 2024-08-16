#include <stdio.h>

int main() { int Numuser = 0 ;
    if( printf( "Please enter your number : " ), scanf( "%d",&Numuser ), Numuser % 2 != 0 ){
        for ( int i = 0; i < Numuser; i++) {    
            for ( int j = 0 ; j < Numuser ; j++){
                if (j == i){
                    printf( "1" ) ;
                }else{
                    printf( "0" ) ;
                }//end if
            }//end for
            printf( "\n" ) ;
        }//end for
    }else{
        for ( int i = 0; i < Numuser; i++) {  
            for ( int j = 0 ; j < Numuser ; j++){
                if (j == Numuser - i - 1){
                    printf( "1" ) ;
                }else{
                    printf( "0" ) ;
                }//end if
            }//end for
            printf( "\n" ) ;
        }//end for
    }//end if
    return 0 ;
}//eng function
