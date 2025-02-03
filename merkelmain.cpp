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
