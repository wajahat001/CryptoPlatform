#include "MerkelMain.h"

#include <iostream>
#include <string>

void MerkelMain::init(){
	
	/** This is the main fuction of init*/
	loadOrderBook();
	int input;
	
	while (true){
		printMenu();
		input = getUserOption();
		processUserOption(input);
	}
	
}

void MerkelMain::loadOrderBook(){
	
	entries.push_back(OrderBookEntry{
        "10-1-2025/10:40:23.9908",	
        "BTC/USDT",
        OrderBookType::ask,
        1000.01,
        2000.901
    });
    entries.push_back(OrderBookEntry {
        "15-2-2025/10:40:23",
        "DOGE/USDT",
        OrderBookType::bid,
        100.051,
        2000.991
	)};
}
