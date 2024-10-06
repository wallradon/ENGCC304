#include <stdio.h>

int main() {
    int indexar = 0, prime = 0 ;
    
    printf( "Enter N : " ) ;
    scanf( "%d", &indexar ) ;
    int PrimeNum[ indexar ] ;
    
    for ( int i = 0 ; i < indexar ; i++ ){ 
        printf( "Enter value[%d] : ", i ) ; 
        scanf( "%d", &PrimeNum[i] ) ;
    }

    // แสดงดัชนีในบรรทัดเดียว
    printf( "Index:  " );
    for ( int i = 0 ; i < indexar ; i++ ) {
        printf( " %d ", i ); 
    }

    // แสดงค่าในอาร์เรย์และตรวจสอบจำนวนเฉพาะ
    printf( "\nArray: " );
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

        // แสดงจำนวนเฉพาะหรือ #
        if ( prime == 1 ){
            printf( " %d  ", PrimeNum[ i ] ) ; 
        } else {
            printf( " # " ) ; 
        }
    }

    return 0 ;
}
