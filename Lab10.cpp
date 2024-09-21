
#include <stdio.h>
#include <string.h> 

int main() {
    char word[ 100 ], word2[ 100 ] ;    
    printf( "Enter Word : " ) ;
    scanf( "%s", word ) ;

    int length = strlen(word) ; 

    printf( "word is : %s\n", word ) ;
    // printf( "length = %d\n", length ) ;
    /* สรุป for
    เช่น
    word = mmin  m=0 m=1 i=2 n=3 _=4

    length = 4
    
    int i = 0 ; i < length ; i++ 

    word2[i] = word[length - i - 1] 
    L1 word2[0] = word[4 - 0 - 1] index 3 ของ word = n word2[0] = word[3] n
    L2 word2[1] = word[4 - 1 - 1] index 2 ของ word = i word2[1] = word[2] i
    L3 word2[2] = word[4 - 2 - 1] index 1 ของ word = m word2[2] = word[1] m 
    L4 word2[3] = word[4 - 3 - 1] index 0 ของ word = m word2[3] = word[0] m    
    
    word = mmin_ | word2 = nimm_

    ออกloop เพราะ i มากกว่า length 
    L5 word2[4] = word[4 - 4 - 1]
    
    ทำไม่ต้อง length - i - 1 
        
        int i = 0 ; i < length ; i++ 
        word2[i] = word[length - i - 1] 

        L1 word2[0] = word[ 4 - 0 ] index 4 ของ word คือ _
        L2 word2[1] = word[ 4 - 1 ] index 3 ของ word คือ n
        L3 word2[2] = word[ 4 - 2 ] index 2 ของ word คือ i
        L4 word2[3] = word[ 4 - 3 ] index 1 ของ word คือ m
        L5 word2[2] = word[ 4 - 4 ] index 0 ของ word คือ m
        
        mmin_ | _nimm

        word = i(0) o(1) i(2) _(3) 
        ioi_  | _ioi

        ถ้า printf ออกมา เทียบกัน เเม้ว่า มันจะ เหมือนกันเเต่ถ้าเช็คออกมาเเล้วมันไม่เหมือนกันเเน่นอนเพราะ 
        word2[0] เริ่มมามันคือ ช่องว่าง
    */

    for ( int i = 0 ; i < length ; i++ )
    {
        word2[i] = word[ length - i - 1 ] ;
    }//end forloop

    /*อธิบาย word2[ length ] = '\0' ;
    ถ้าใส่ mmin เเล้ว length จะเท่ากับ 4 เเต่จะนับ m=0 m=1 i=2 n=3 จะเหลือช่องว่างอยู่ 1 ช่อง คือ 4 

    เลยต้องใส่จุดสิ้นสุดไม่ให้มันอ่านค่าไปเรื่อย*/
    word2[ length ] = '\0' ;//null character คือ การบอกจุดสิ้นสุดของสตริง

    printf( "befor : %s | after : %s \n", word, word2 ) ;
    int verify = strcasecmp( word, word2 ) ; //string compare, case insensitive
    // printf( " is : %d\n", verify ) ;
    if ( verify == 0 )
    {
        printf( "verify is :  Pass." ) ;
    } else{
        printf( "verify is : Not Pass." ) ;
    }//end if
    return 0 ;
}
