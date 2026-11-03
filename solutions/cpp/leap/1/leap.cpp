#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(int num){
    if(num%100 ==0){
        if(num%400 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(num%4 ==0){
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}


    
}  // namespace leap
