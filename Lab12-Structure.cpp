#include <stdio.h>

struct Student {
    char Name[ 99 ] ;
    char LName[ 99 ] ;
    char ID[ 5 ] ;
    float Score[ 5 ] ;
} typedef stu ;



void inputdata( stu student[ ], int numstudents ) ; 
void outputdata( stu student[ ], int numstudents ) ;
void scoreG( float score ) ;
float average( float score[ ], int numsubjects ) ;

int main() {
    int numstudents = 1 ,sum = 0 ;
    stu student[ numstudents ] ;

    inputdata( student, numstudents ) ; 
    outputdata( student, numstudents ) ;

    return 0 ;
}//end main function


void inputdata( stu student[ ], int numstudents ){
    for ( int i = 0 ; i < numstudents ; i++ ){
        printf( "-----student %d -----\n", i + 1 ) ;
        printf( "Enter Name : " ) ;
        scanf( "%s", student[ i ].Name ) ;
        printf( "Enter LName : " ) ;
        scanf( "%s", student[ i ].LName ) ;
        printf( "Enter ID : " ) ;
        scanf( "%s", student[ i ].ID ) ;
        for ( int g = 0 ; g < 5 ; g++ ){
            printf( "Enter ScoreSub : " ) ;
            scanf( "%f", &student[ i ].Score[ g ] ) ; 
        } 
    }//end for   
}//end function

void scoreG( float score ) {
    if ( score >= 80 ) {
        printf( "A\t" );
    } else if ( score >= 75 && score < 80 ) {
        printf( "B+\t" );
    } else if ( score >= 70 && score < 75 ) {
        printf( "B\t" );
    } else if ( score >= 65 && score < 70 ) {
        printf( "C+\t" );
    } else if ( score >= 60 && score < 65 ) {
        printf( "C\t" );
    } else if ( score >= 55 && score < 60 ) {
        printf( "D+\t" );
    } else if ( score >= 50 && score < 55 ) {
        printf( "D\t" );
    } else {
        printf( "F\t" );
    }
}

void outputdata( stu student[ ], int numstudents ){

    for ( int i = 0 ; i < numstudents ; i++ )
    {
        printf( "\nStudent %d:\n", i + 1 ) ;
        printf( "%6s : %10s %s\n", "Name", student[i].Name, student[i].LName ) ;
        printf( "%6s : %10s\n", "ID", student[ i ].ID ) ;
        printf( "%s : %8s", "Scores", "" ) ;
        for (int h = 0 ; h < 5 ; h++ ) {
            printf( "%5.2f ", student[ i ].Score[ h ] ) ;
        }
        printf( "\nGrades : %8s ", "" ) ;
        for ( int g = 0 ; g < 5 ; g++ ) {
            scoreG( student[i].Score[g] ) ;
        }//end for
           
        float avg = average(student[i].Score, 5 );
        printf( "\nAverage: %12.2f\n", avg );

    }//end for

}//end function

float average( float score[ ], int numsubjects ) {
    float sum = 0 ;
    for ( int i = 0 ; i < numsubjects; i++ ) {
        sum += score[ i ];
        printf( "\tsc = %f", score[ i ] ) ;
    }
    return sum / numsubjects ;
}//end function
