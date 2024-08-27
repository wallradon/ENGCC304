/*
    เขียนโปรแกรมเพื่อคำนวณหาพื้นที่สามเหลี่ยม เมื่อผู้ใช้กรอกค่าได้เพียง 2 ค่าคือ ส่วนสูง และ ฐาน 
    
    เช่น ส่วนสูง 6 และฐานคือ 2 ดังนั้นพื้นที่สามเหลี่ยมคือ (6x2)/2 = 6
    
    Test case:
        Enter H & W :
            6 2
    Output:
        Triagle Area : 6.0

    Test case:
        Enter H & W :
            3 5
    Output:
        Triagle Area : 7.5
*/
#include <stdio.h>

int main(){
    printf( "Program to calculate the area of ​​a triangle\n" ) ;
    int hight = 0, base = 0, a = 0 ;
    printf( "please enter Hight : " ) ;
    scanf( "%d", &hight ) ;
    printf( "please enter Base : " ) ;
    scanf( "%d", &base ) ;
    printf( "Hight = %d Base = %d\n", hight, base ) ;
    a = hight * base / 2 ;
    printf( "your area : %d", a ) ;
}