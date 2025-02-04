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

    OrderBookEntry(
        std::string _timeStamp,
        std::string _product,
        OrderBookType _orderType,
        double _price,
        double _amount)

    {
    }
};