
#include <stdio.h>

int main() {
    int indexar = 0, prime = 0 ;
    
    printf("Enter Index : " ) ;
    scanf( "%d", &indexar ) ;
    
    int PrimeNum[ indexar ] ;

    printf( "Index: " );
    for ( int i = 0 ; i < indexar ; i++ ) {
        printf( "%3d", i ); // แสดง Index โดยให้ช่องว่าง 3 ช่อง
    }//end for

    printf( "\n" ) ;
    
    for ( int i = 0 ; i < indexar ; i++ ){ //input PrimeNum
        printf( "Enter number |%d| : ", i ) ; 
        scanf( "%d", &PrimeNum[i] ) ;
    }//end for

    printf( "\n" ) ;
    printf( "PrimeNum : " );

    for ( int i = 0 ; i < indexar ; i++ ){ //คำนวณ
        
        prime = 1 ;

        if ( PrimeNum[i] > 1 ){//calculate
            for ( int k = 2 ; k < PrimeNum[i] ; k++ ){ 
                if ( PrimeNum[i] % k == 0 )
                {
                    prime = 0 ;
                }//end if
            }else{
                prime = 0 ;
            }//end for
        if ( prime == 1 ){
           printf( "%2d", PrimeNum[ i ] ) ;
        }else{
            printf( "  #" ) ;
        }//end if
    } //end for
    printf( "\n" ) ;
    return 0 ;
}//end main function
