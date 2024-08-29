/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    Test case:
        L M Y K
    Output:
        Result: K Y M L
    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>
int main() {
    char a[99], b[99], c[99], d[99] ;  
    printf  ( "Enter the characters \n" ) ;
    printf  ( "Enter the characters 1 : " ) ;
    scanf   ( "%s", a ) ;
    printf  ( "Enter the characters 2 : " ) ;
    scanf   ( "%s", b ) ;
    printf  ( "Enter the characters 3 : " ) ;
    scanf   ( "%s", c ) ;
    printf  ( "Enter the characters 4 : " ) ;
    scanf   ( "%s", d ) ;
     
    if (a[0] != '\0') {
        printf( "%s\t", d );
        printf( "%s\t", c );
        printf( "%s\t", b );
        printf( "%s\t", a );
    } else {
        printf( "Error\n" );
    }
    return 0;
} 

    




