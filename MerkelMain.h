#pragma once

#include <vector>
#include <iostream>
#include "OrderBookEntry.h"

class MerkelMain{
	public:
		MerkelMain();
		void init ();
		
	private:
		void printMenu();
		void loadOrderBook();
		int getUserOption();
		void printHelp();
		void printExchangeStats();
		void placeAsk();
		void placeBid();
		void printWallet();
		void gotoNextTimeFrame();
		void processUserOption(int userOption);
		
		std::vector<OrderBookEntry> entries;
};