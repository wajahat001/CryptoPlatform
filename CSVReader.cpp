#include "CSVReader.h"
#include <iostream>

CSVReader::CSVReader(){

}


std::vector<std::string> CSVReader::tokenise(std::string csvLine, char seperator){
    std::vector<std::string> entries;
    return entries;
}

OrderBookEntry CSVReader::StringtoOBE(){

    std::vector<std::string> tokens;
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
    
    std::vector<OrderBookEntry> reader;
    return reader;
}
   

