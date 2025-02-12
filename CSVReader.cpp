#include "CSVReader.h"

CSVReader::CSVReader(){

}


std::vector<std::string> CSVReader::tokenise(std::string csvLine, char seperator){
    std::vector<std::string> entries;
    return entries;
}

OrderBookEntry CSVReader::StringtoOBE(){
    OrderBookEntry obe{
        "",
        "",
        OrderBookType::ask,
        1,
        1,
    };

    return obe;

}
    

std::vector<OrderBookEntry> CSVReader::readCSV (std::string csvFile){
    
    std::vector<OrderBookEntry> reader;
    return reader;
}
   

