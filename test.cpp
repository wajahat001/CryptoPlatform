#include <iostream>
#include <vector>
#include <string.h>

std::vector<std::string> tokenise(std::string csvLine, char seperator){

    std::vector<std::string> tokens;
    signed int start,end;
    std::string token;

    start = csvLine.find_first_not_of(seperator,0);

    do{
        end= csvLine.find_first_of(seperator, start);
        if (start == csvLine.length() || start == end ) break;
        if(end>=0) token= csvLine.substr(start, end-start);
        else token= csvLine.substr(start, csvLine.length()-start);
        tokens.push_back(token);
        start = end + 1 ;
    }while (end > 0);

    
    return tokens;
} 


int main(){

    std::vector<std::string> tokens;
    std::string s = "thing,thing1,thing2,thing3";

    tokens = tokenise(s, ',');

    for(std::string& t : tokens){
        std::cout<<t<<std::endl;
    }


    return 0;
}