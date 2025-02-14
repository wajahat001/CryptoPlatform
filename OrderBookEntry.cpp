#pragma once
#include "OrderBookEntry.h"

#include <iostream>
#include <string>

OrderBookEntry::OrderBookEntry(
        std::string _timeStamp,
        std::string _product,
        OrderBookType _orderType,
        double _price,
        double _amount) : 
                        timeStamp(_timeStamp),
                        product(_product),
                        orderType(_orderType),
                        price(_price),
                        amount(_amount)
   {
    
   }

OrderBookType OrderBookEntry::StingToOrderBookType(std::string s){
 if (s=="ask")
 {
        return OrderBookType::ask;
 }
if (s=="bid")
 {
        return OrderBookType::bid;
 }
 else {
        return OrderBookType::unknown;
 }
 
 
}

