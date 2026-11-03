#include "triangle.h"
#include <iostream>
#include <stdexcept>
namespace triangle {

    bool is_true(float a,float b,float c){
        if(a<=0||b<=0||c<=0){
            return false;
        }
        if((a+b)>=c&&(a+c)>=b&&(b+c)>=a){return true;}
        else{return false;}
        
    }

     triangle::flavor kind(float a,float b,float c){
             if(!is_true(a,b,c)){
            throw std::domain_error("Invalid triangle");
                }
         if(a==b&&b==c){
             return flavor::equilateral;
         }
         else if(a==b||b==c||a==c){
             return flavor::isosceles;
         }
         else{
             return flavor::scalene;
         }

         }

// TODO: add your solution here

}  // namespace triangle
