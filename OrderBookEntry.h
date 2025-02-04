#pragma once

#include <iostream>
#include <string>

enum class OrderBookType
{
    bid,
    ask
};

class OrderBookEntry
{
public:
    double amount;
    double price;
    std::string product;
    std::string timeStamp;
    OrderBookType orderType;