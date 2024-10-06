#include <stdio.h>

struct Student {
    char Name[99] ;
    char LName[99] ;
    char ID[5] ;
    float Score[5] ;
} typedef stu ;

void inputdata( stu student[], int numstudents ) ;
void outputdata( stu student[], int numstudents ) ;
void scoreGrades( float score );
float average( float score[], int numsubjects ) ;

int main() {
    int numstudents = 3 ;
    stu student[numstudents] ;
    inputdata( student, numstudents ) ;
    outputdata( student, numstudents ) ;
    return 0 ;
}//endfunction

void inputdata( stu student[], int numstudents ) {//input
    for (int i = 0; i < numstudents; i++) {
        printf( "Enter the details of Student %d:\n", i + 1 ) ;
        printf( "Name: " ) ;
        scanf( "%s %s", student[i].Name, student[i].LName ) ;
        printf( "ID: " ) ;
        scanf( "%s", student[i].ID ) ;
        for ( int g = 0; g < 5; g++ ) {
            printf( "Scores in Subject %d: ", g + 1 ) ;
            scanf( "%f", &student[i].Score[g] ) ;
        }//end for
    }//end for
}//endfunction

void scoreGrades(float score) { //grades
    if ( score >= 80 ) {
        printf( " A" ) ;
    } else if ( score >= 75 && score < 80 ) {
        printf( " B+" ) ;
    } else if ( score >= 70 && score < 75 ) {
        printf( " B" ) ;
    } else if ( score >= 65 && score < 70 ) {
        printf( " C+" ) ;
    } else if ( score >= 60 && score < 65 ) {
        printf( " C" ) ;
    } else if ( score >= 55 && score < 60 ) {
        printf( " D+" ) ;
    } else if ( score >= 50 && score < 55 ) {
        printf( " D" ) ;
    } else {
        printf( " F" ) ;
    }
}//endfunction

void outputdata( stu student[], int numstudents ) {//out
    for (int i = 0; i < numstudents; i++) {
        printf( "\nStudent %d:\n", i + 1 ) ;
        printf( "Name: %s %s\n", student[ i ].Name, student[ i ].LName ) ;
        printf( "ID: %s\n", student[ i ].ID ) ;
        printf( "Scores:" ) ;
        for ( int h = 0 ; h < 5 ; h++ ) {
            printf( " %.0f", student[i].Score[h] ) ; 
        }//end for
        printf( "\nGrades:" ) ;
        for ( int g = 0 ; g < 5 ; g++ ) {
            scoreGrades( student[i].Score[g] ) ;
        }//end for
        float avg = average( student[i].Score, 5 ) ;
        printf( "\nAverage Scores: %.1f\n", avg ) ;
    }//end for
}//endfunction

float average( float score[], int numsubjects ) {//average
    float sum = 0;
    for ( int i = 0 ; i < numsubjects ; i++ ) {
        sum += score[ i] ;
    }//end for
    return sum / numsubjects ;
}//endfunction