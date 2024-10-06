/*
    จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
    - หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
    - หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

    Test case:
        Enter value:
            11
    Output:
        Series: 1 3 5 7 9 11

    Test case:
        Enter value:
            8
    Output:
        Series: 8 6 4 2 0
*/
#include <stdio.h>

int main() {
    int values = 0, ck = 0 ;
    printf( "Enter value: " ) ;
    scanf( "%d", &values ) ;
    ck = values % 2 ;
    // printf( "ck = %d\n", ck ) ;
    if ( ck == 0 ){
        printf( "Series: " ) ;
        for (int i = values ; i >= 0 ; i-- )
        {
            printf( "%d ", i ) ;
            i-- ;
        }
    }else if ( ck == 1 )
    {
        printf( "Series: " ) ;
        for (int c = 1 ; c <= values ; c++ )
        {
            printf( "%d ", c ) ;
            c++ ;
        }
    }
    return 0 ;
}//end main function