#include <stdio.h>

int main() {
    int indexar = 0, prime = 0 ;
    
    printf( " Enter N : " ) ;
    scanf( "%d", &indexar ) ;
    int PrimeNum[ indexar ] ;
    
    for ( int i = 0 ; i < indexar ; i++ ){ 
        printf( "Enter value[%d] : ", i ) ; 
        scanf( "%d", &PrimeNum[i] ) ;
    }

    printf( "Index:" );
    for ( int i = 0 ; i < indexar ; i++ ) {
        printf( " %d", i ); 
    }
    printf( "\n Array:" );
    for ( int i = 0 ; i < indexar ; i++ ){  
        prime = 1 ;
        if ( PrimeNum[i] > 1 ){ 
            for ( int k = 2 ; k < PrimeNum[i] ; k++ ){ 
                if ( PrimeNum[i] % k == 0 ) {
                    prime = 0 ;
                    break; 
                }
            }
        } else {
            prime = 0;
        }
        if ( prime == 1 ){
            printf( " %3d", PrimeNum[ i ] ) ; 
        } else {
            printf( " %3s", "#" ) ; 
        }
    }
    return 0 ;
}//end main function
