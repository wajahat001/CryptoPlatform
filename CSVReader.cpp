#include "CSVReader.h"
#include <iostream>
#include <fstream>
#include <string>

CSVReader::CSVReader(){

}


std::vector<std::string> CSVReader::tokenise(std::string csvLine, char seperator){

    std::vector<std::string> entries;
    signed int start,end;
    std::string token;

    start = csvLine.find_first_not_of(seperator,0);

    do{
        end= csvLine.find_first_of(seperator, start);
        if (start == csvLine.length() || start == end ) break;
        if(end>=0) token= csvLine.substr(start, end-start);
        else token= csvLine.substr(start, csvLine.length()-start);
        entries.push_back(token);
        start = end + 1 ;
    }while (end > 0);
    return entries;
}

OrderBookEntry CSVReader::StringtoOBE(std::vector<std::string> tokens){

    double price, amount;

    if(tokens.size() != 5){
        std::cout<<"Bad Line! Not Enough Values"<<std::endl;
        throw std::exception{};   
    }
    try
    {
        price = std::stod(tokens[3]);
        amount = std::stod(tokens[4]);
    }
    catch(std::exception& e)
    {
        std::cout<<"There is Invalid double!"<< tokens[3] <<std::endl;
        std::cout<<"There is Invalid double!"<< tokens[4] <<std::endl;
        throw;
    }



    OrderBookEntry obe{
        tokens[0],
        tokens[1],
        OrderBookEntry::StingToOrderBookType(tokens[2]),
        price,
        amount,
    };

    return obe;

}
    

std::vector<OrderBookEntry> CSVReader::readCSV (std::string csvFile){
    
    std::vector<OrderBookEntry> entries;
    std::ifstream Datafile{csvFile};
    std::string line;

    if(Datafile.is_open()){
        while (std::getline(Datafile, line))
        {
            try
            {
                    OrderBookEntry obe = StringtoOBE(tokenise(line,','));
                    entries.push_back(obe);
            }
            catch(const std::exception& e)
            {
                std::cout<<"Exception occur "<<std::endl;
            }
        }
        Datafile.close();
        std::cout<<"Total numer of entries read by reader is "<< entries.size() <<std::endl;
        
        return entries;
    }
}
   

