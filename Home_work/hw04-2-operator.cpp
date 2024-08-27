/*
    จงเติมโค้ดโปรแกรมตามที่แสดงในส่วนของ Placeholder เพื่อแสดงผลลัพธ์ของ Operator ด้านซ้ายมือ พร้อมทั้งแก้ไขโค้ดโปรแกรมให้ถูกต้อง
*/
#include <stdio.h>
int main() {
    int a = 10, b = 10 ;
    
    // printf( "Please enter value (a b) : " ) ;
    // scanf( "%d %d", &a, &b ) ; //TODO: #11 Input variable 'a' and 'b'

    //TODO: #12 Complete operator, and display all operator output. (and fix all bugs.)
    printf( "a = %d , b = %d \n", a, b ) ;
    a += b ;
    printf( "a + b = %d \n", a ) ;
    
    a -= b ;
    printf( "a - b = %d \n", a ) ;
    a *= b ;
    printf( "a * b = %d \n", a ) ;
    a /= b ;
    printf( "a / b = %d (b must greater than 0)\n", b > 0 ? a : 0 ) ;
    a %= b ; 
    printf( "a % b = %d \n", a ) ;
    ++a ;
    printf( "++a = %d \n", a ) ;
    a-- ; 
    printf( "a-- = %d \n", a ) ;

    // printf( "a += 1 %d \n", __ ) ;
    // printf( "a += b %d \n", __ ) ;
    // printf( "a -= 1 %d \n", __ ) :
    // printf( "a -= b %d \n", __ ) ;
    // printf( "a *= 1 %d \n", __ ) ;
    // print ( "a *= b %d \n", __ ) ;
    // printf( "a %= 1 %d \n", __ ) ;
    // printf( "a %= b %d \n", __ ) ;
    int aaa = a && b;
    printf("a && b = %d \n", aaa);
    int aa = a || b ;
    printf( "a || b = %d \n", aa ) ;
    return 0 ;
}

