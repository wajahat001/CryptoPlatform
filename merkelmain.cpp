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

void MerkelMain::printMenu(){
    std::cout << "1: Print  Help" << std::endl;
    std::cout << "2: Print  exchange stat" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print Wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
}

int MerkelMain::getUserOption(){
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    return userOption;
}