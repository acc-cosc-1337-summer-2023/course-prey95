//add include statements
#include "repetition.h"
//add function(s) code here

double get_gc_content(string word){

    int i = 0;
    int counter = 0;

    while((word.size())>i){
        if(word[i] == 'C'){
            counter++;
        }
        if(word[i] == 'G'){
            counter++;
        }
        i++;
    }

    double gc = counter / ((double) word.size());
    return gc * 100;

};

//string get_reverse_string{};
