/*โจทร์
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
    // printf( "length = %d\n", length ) ;
    /* สรุป for
    forนี่คือการกลับตัวอักษร เมื่อ ให้ i = 0 ถ้า i < length ให้ for ทำงาน
    โดย wordrev[i] = word[length - i - 1]  คือให้ wordrev = word เเต่ ค่า index ของ word จะมีค่าเท่ากับ length - i - 1
    
    เช่น
    word = mmin
    length = 4

    wordrev[i] = word[length - i - 1] 
    L1 wordrev[0] = word[4 - 0 - 1] index 3 ของ word = n
    L2 wordrev[1] = word[4 - 1 - 1] index 2 ของ word = i
    L3 wordrev[2] = word[4 - 2 - 1] index 1 ของ word = m
    L4 wordrev[3] = word[4 - 3 - 1] index 0 ของ word = m
    ออกloop เพราะ i มากกว่า length 
    L5 wordrev[2] = word[4 - 4 - 1]
    
    ทำไม่ต้อง length - i - 1 เพราะ เป็นการนับเลขย้อนหลังเพื่อให้เลข index ย้อนกลับใส่ในอีกสตริงหนึ่งเพื่อเก็บตัวย้อนกลับ 

    ถ้าลบ i เฉยๆ ไม่ลบ 1 ได้มั้ย 
        ไม่ได้เพราะ ถ้าใส่ mmin เเล้ว length จะเท่ากับ 4 เเต่จะนับ m=0 m=1 i=2 n=3 แล้วเริ่มเเรกมา 
        L1 wordrev[0] = word[ 4 - 0 ] index 4 ของ word ไม่มีอะไร
        L2 wordrev[1] = word[ 4 - 1 ] index 3 ของ word คือ n
        L3 wordrev[2] = word[ 4 - 2 ] index 2 ของ word คือ i
        L4 wordrev[3] = word[ 4 - 3 ] index 1 ของ word คือ m
        L5 wordrev[2] = word[ 4 - 4 ] index 0 ของ word คือ m
        ถ้า printf ออกมา เทียบกัน เเม้ว่า มันจะ เหมือนกันเเต่ถ้าเช็คออกมาเเล้วมันไม่เหมือนกันเเน่นอนเพราะ 
        wordrev[0] เริ่มมามันคือ ช่องว่าง
    */
    for ( int i = 0 ; i < length ; i++ )
    {
        wordrev[i] = word[ length - i - 1 ] ;
    }
    /*อธิบาย wordrev[ length ] = '\0' ;
    ถ้าใส่ mmin เเล้ว length จะเท่ากับ 4 เเต่จะนับ m=0 m=1 i=2 n=3 จะเหลือช่องว่างอยู่ 1 ช่อง คือ 4

    เลยต้องใส่จุดสิ้นสุดไม่ให้มันอ่านค่าไปเรื่อย*/
    wordrev[ length ] = '\0' ;//null character คือ การบอกจุดสิ้นสุดของสตริง
    printf( "befor : %s | after : %s \n", word, wordrev ) ;
    int verify = strcasecmp( word, wordrev ) ; //string compare, case insensitive
    // printf( " is : %d\n", verify ) ;
    if ( verify == 0 )
    {
        printf( "verify is :  Pass." ) ;
    } else{
        printf( "verify is : Not Pass." ) ;
    }

    return 0 ;
}
