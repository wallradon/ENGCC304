/*

    รับตัวเลขจากผู้ใช้มา 2 จำนวน เพื่อแสดงแม่สูตรคูณบนหน้าจอคอมพิวเตอร์ โดยแสดงแม่สูตรคูณจากตัวเลขแรกที่รับจากผู้ใช้ ไปสิ้นสุดยังตัวเลขสุดท้ายที่รับจากผู้ใช้
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Start :
            3
        End :
            5
    Output:
        3 x 1 = 3
        3 x 2 = 6
        3 x 3 = 9
        3 x 4 = 12
        3 x 5 = 15
        3 x 6 = 18
        3 x 7 = 21
        3 x 8 = 24
        3 x 9 = 27

        4 x 1 = 4
        4 x 2 = 8
        4 x 3 = 12
        4 x 4 = 16
        4 x 5 = 20
        4 x 6 = 24
        4 x 7 = 28
        4 x 8 = 32
        4 x 9 = 36

        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45

    Test case:
        Start :
            4
        End :
            6
    Output:
        4 x 1 = 4
        4 x 2 = 8
        4 x 3 = 12
        4 x 4 = 16
        4 x 5 = 20
        4 x 6 = 24
        4 x 7 = 28
        4 x 8 = 32
        4 x 9 = 36

        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45

        6 x 1 = 6
        6 x 2 = 12
        6 x 3 = 18
        6 x 4 = 24
        6 x 5 = 30
        6 x 6 = 36
        6 x 7 = 42
        6 x 8 = 48
        6 x 9 = 54

*/
#include<stdio.h>
int main(){
    int start = 0, end = 0, product = 0 ;
    printf( "enter start : " ) ;
    scanf( "%d", &start ) ;
    printf( "enter end : " ) ;
    scanf( "%d", &end ) ;
    //s>e,e>s
    if (start <= end)
    {
        for ( ; start <= end; start++ ){
            for (int i = 1; i <= 9; i++){
                product = start * i ;
                printf( "%d * %d = %d\n", start, i, product ) ;
            }
            printf( "\n" ) ;
        }//endforloop
    }else{
        for ( ; start >= end; start-- ){
            for (int i = 1; i <= 9; i++){
                product = start * i ;
                printf( "%d * %d = %d\n", start, i, product ) ;
            }
            printf( "\n" ) ;
        }//endforloop
    }//endif    
}//endfunction