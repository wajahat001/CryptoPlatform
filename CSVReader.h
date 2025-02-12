#pragma once

#include "OrderBookEntry.h"
#include <vector>
#include <string>

class CSVReader
{
private:
    static std::vector<std::string> tokenise(std::string csvLine, char seperator);
    static OrderBookEntry StringtoOBE();
    
public:
    CSVReader();

    static std::vector<OrderBookEntry> readCSV (std::string csvFile);
   
};

