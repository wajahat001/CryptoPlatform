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


void MerkelMain::printHelp(){
    std::cout << "So this is the crypto exchange you will exchange your currency and make money easily" << std::endl;
}
void MerkelMain::printExchangeStats(){
    std::cout << "No current stats" << std::endl;
    std::cout << "Wait for some time" << std::endl;
}
void MerkelMain::placeAsk(){
    std::cout << "Place an ask amount: Enter the amount" << std::endl;
}
void MerkelMain::placeBid(){
    std::cout << "Now Time to place a bid: Enter the amount" << std::endl;
}
void MerkelMain::printWallet(){
    std::cout << "Your wallet is empty currently" << std::endl;
    std::cout << "The above is the data in your wallet" << std::endl;
}
void MerkelMain::gotoNextTimeFrame(){
    std::cout << "Continue....." << std::endl;
    std::cout << "Moving to the next time frame" << std::endl;
}