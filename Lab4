/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ 
    
    โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง 
    
    จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00
*/
/*
        Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/


#include <stdio.h>

int main() {

    char key_em[10] ; 
    int workhours = 0, income_hours = 0, salary = 0 ;

    printf( "please enter Employees ID : " ) ;
    scanf( "%s", key_em ) ;
    printf( "Please enter the working / Hours : " ) ;
    scanf( "%d", &workhours ) ;
    printf( "Please enter Salary amount/hr : " ) ;
    scanf( "%d",&income_hours ) ;
    printf( "\n" ) ;

    salary = workhours * income_hours * 30 ;

    printf( "-------------------------------------------------------------------------------------------\n" ) ;
    printf( "Employees ID = %s \n", key_em) ;
    printf( "Salary = %d Baht", salary ) ;    

    //--| YOUR CODE HERE

    return 0 ;

}//end main function
