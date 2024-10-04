/*
    จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
    - ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100 //
    - โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100 //
    - ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด //
        - หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย //
        - หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย //
        - หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย //
        - หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น //
        - เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม //

    หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
        rand() % 100 + 1
    หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย
/*
    Test case & Output:
        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) :
            20
        Sorry, the winning number is HIGHER than 20. (Score=90)
        Guess the winning number (21-100) :
            50
        Sorry, the winning number is LOWER than 50. (Score=80)
        Guess the winning number (21-49) :
            42
        That is correct! The winning number is 42.
        Score this game: 80
*/
/*
        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) : 
            75
        Sorry, the winning number is LOWER than 75. (Score=90)
        Guess the winning number (1-74) : 
            20
        Sorry, the winning number is LOWER than 20. (Score=80)
        Guess the winning number (1-19) : 
            2
        Sorry, the winning number is HIGHER than 2. (Score=70)
        Guess the winning number (3-19) : 
            15
        That is correct! The winning number is 15.
        Score this game: 70

        Do you want to play game (1=play,-1=exit) :
            -1
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // for srand(time(0)) 

int main() {
    srand( time( NULL ) ) ;  //สุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา
    int randomNumber = 0, user_number = 0, Score = 100, in_game = 0, dif1 = 1, dif2 = 100 ;  
    while ( in_game == 0 ){ //#01
        Score = 100 ;  //rescore
        dif1 = 1, dif2 = 100 ; //reDifference
        //การเริ่มเกม
        printf( "Do you want to play game (1=play,-1=exit) :  " ) ;
        scanf( "%d", &in_game ) ;
        //เข้าการตรวจสอบ
        if ( in_game == 1 )
        {
            in_game = 0 ;  // กำหนดเพื่อเริ่มใหม่
            randomNumber = rand( ) % 101 ; //สุ่มตัเลข
            printf( "Your Score : %d \n", Score ) ;
            printf( "Random number : %d\n", randomNumber ) ;
            do{
                printf( "Guess the winning number (%d-%d) : ", dif1, dif2  ) ;
                scanf( "%d", &user_number ) ;
                if ( user_number == randomNumber ){
                    printf( "That is correct! The winning number is %d.\n", randomNumber ) ;
                    printf( "Score this game: %d \n", Score ) ;
                }else if ( user_number < randomNumber ){
                    Score -= 10 ;
                    printf( "Sorry, the winning number is HIGHER than %d. (Score=%d)\n", user_number, Score ) ;
                    if ( user_number > dif1 )
                    {
                        dif1 = user_number + 1 ;
                    }                    
                    // dif1 = user_number + 1 ;
                }else if ( user_number > randomNumber ){
                    Score -= 10 ;
                    printf( "Sorry, the winning number is LOWER than %d. (Score=%d)\n", user_number, Score ) ;
                    if ( user_number < dif2 )
                    {
                        dif2 = user_number - 1 ;
                    }  
                    // dif2 = user_number - 1 ; 
                }//end if
                if  ( Score == 0 ){
                    printf( "-----------------------------------------\n" ) ;
                    break ;
                }//end if
                printf( "-----------------------------------------\n" ) ;
            } while ( user_number != randomNumber ) ; //end while
        }//end if
    }//end while
    printf( "...Bye..." ) ;
    return 0 ;
}//end function
