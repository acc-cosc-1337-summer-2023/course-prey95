//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
char get_letter_grade_using_if(int grade){

    char letter;

    if(grade >= 90 && grade <=100){
        letter = 'A';
    }

    if(grade >= 80 && grade <=89){
        letter = 'B';
    }

    if(grade >= 70 && grade <=79){
       letter = 'C';
    }

    if(grade >= 60 && grade <=69){
         letter = 'D';
    }
    
    if(grade >= 0 && grade <=59){
         letter = 'F';
    }

    return letter;
};


char get_letter_grade_using_switch(int grade){

    char letter;

    switch(grade)
    {
        case 95:
            letter = 'A';
            break;
        case 85:
            letter = 'B';
            break;
        case 75:
            letter = 'C';
            break;
        case 65:
            letter = 'D';
            break;
        case 50:
            letter = 'F';
            break;
    }

    return letter;
};