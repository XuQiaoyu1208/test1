#include "protein_translation.h"
#include<string>
#include<vector>
#include<iostream>
#include <stdexcept>
namespace protein_translation {
    
    std::vector<std::string> proteins(std::string sequence){
        int len = sequence.size();
        if(len%3 != 0 ){
throw std::invalid_argument("Invalid sequence");
        }
        const int row = len/3;
        std::vector<std::string> data;
        for(int i=0;i<row;i++){
            int a=i*3;
            data.push_back(sequence.substr(a,3));
        }
        
        std::vector<std::string> result;
        for(int i=0;i<row;i++){
            if(data[i] =="UAA"||data[i]=="UAG"||data[i]=="UGA"){
                break;
            }  
           if(data[i] =="AUG"){
               result.push_back ("Methionine") ;
           }
            if(data[i] =="UUU"||data[i]=="UUC"){
                result.push_back ("Phenylalanine");
            }
            if(data[i] =="UUA"||data[i]=="UUG"){
                result.push_back("Leucine") ;
            }
            if(data[i] =="UCU"||data[i]=="UCC"||data[i] =="UCA"||data[i]=="UCG"){
                result.push_back("Serine");
            }
            
            if(data[i] =="UAU"||data[i]=="UAC"){
                result.push_back("Tyrosine");
            }            
            if(data[i] =="UGU"||data[i]=="UGC"){
                result.push_back("Cysteine") ;
            }            
            if(data[i] =="UGG"){
                result.push_back("Tryptophan");
            }            
          
        }


    return result;

        
    }


}  // namespace protein_translation
