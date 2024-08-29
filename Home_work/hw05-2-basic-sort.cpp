/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/

#include <stdio.h>
int main() {
    int input_1 = 0, input_2 = 0, input_3 = 0 ;
    printf( "Please enter your user1 number : " ) ;
    scanf( "%d", &input_1 ) ;
    printf( "Please enter your user2 number : " ) ;
    scanf( "%d", &input_2 ) ;
    printf( "Please enter your user3 number : " ) ;
    scanf( "%d", &input_3 ) ;
    // input_1 >= input_2 >= input_3
    // input_1 >= input_3 >= input_2
    // input_2 >= input_1 >= input_3
    // input_2 >= input_3 >= input_1
    // input_3 >= input_1 >= input_2
    // input_3 >= input_2 >= input_1
    if (input_1 >= input_2 && input_2 >= input_3) {
        printf( "%d, %d, %d\n", input_1, input_2, input_3 );
    } else if ( input_1 >= input_3 && input_3 >= input_2 ) {
        printf( "%d, %d, %d\n", input_1, input_3, input_2 ) ;
    } else if ( input_2 >= input_1 && input_1 >= input_3 ) {
        printf( "%d, %d, %d\n", input_2, input_1, input_3) ;
    } else if ( input_2 >= input_3 && input_3 >= input_1 ) {
        printf( "%d, %d, %d\n", input_2, input_3, input_1 );
    } else if ( input_3 >= input_1 && input_1 >= input_2 ) {
        printf( "%d, %d, %d\n", input_3, input_1, input_2 );
    } else if ( input_3 >= input_2 && input_2 >= input_1 ) {
        printf( "%d, %d, %d\n", input_3, input_2, input_1 );
    }//endif  
}//endfunction