#include <iostream>
#include <vector>
#include <string>
#include <fstream>

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

    // std::vector<std::string> tokens;
    // std::string s = "2020/03/17 17:01:55.120438,DOGE/USDT,ask,0.00186,10000.";

    // tokens = tokenise(s, ',');

    // for(std::string& t : tokens){
    //     std::cout<<t<<std::endl;
    // }

    std::ifstream DataFile{"data.csv"};
    std::string line;
    std::vector<std::string> tokens;
  

    if(DataFile.is_open()){
        std::cout<<"File is open"<<std::endl; 

        while (std::getline(DataFile,line))
        {
            std::cout<< line << std::endl;
            tokens = tokenise(line , ',');
            double price = std::stod(tokens[3]);
            double amount = std::stod(tokens[4]);
            std::cout<< price << " : " << amount << std::endl;

        }
        DataFile.close();
    }
    else{
        std::cout<<"File is closed"<<std::endl;
    }

    return 0;
}