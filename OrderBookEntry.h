#pragma once

#include <iostream>
#include <string>

enum class OrderBookType
{
    bid,
    ask,
    unknown
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
        double _amount);

    static OrderBookType StingToOrderBookType (std::string s);
};