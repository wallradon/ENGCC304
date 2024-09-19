/*pr
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int wordindex = 100 ;
    char word[ wordindex ], wordrev[ 100 ] ;
    printf( "Enter Word : " ) ;
    scanf( "%s", word ) ;
    int length = strlen(word) ;
    printf( "word is : %s\n", word ) ;
    printf( "length = %d\n", length ) ;
    
    for (int i = 0 ; i < length ; i++)
    {
        wordrev[i] = word[length - i - 1] ;
    }
    wordrev[length] = '\0';
    printf( "Word or reversed is %s : %s \n", word, wordrev ) ;
    int verify = strcmp( word, wordrev ) ;
    printf( "verify it is : %d\n", verify ) ;
    if ( verify == 0 )
    {
        printf( "Output :  Pass." ) ;
    } else{
        printf( "Output : Not Pass." ) ;
    }
    
    return 0 ;

}//end main function
