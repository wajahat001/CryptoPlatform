#include <iostream>


void printMenu(){
    std::cout << "1: Print  Help" << std::endl;
    std::cout << "2: Print  exchange stat" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print Wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
}

int getUserOption(){
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    return userOption;
}

void printHelp(){
    std::cout << "So this is the crypto exchange you will exchange your currency and make money easily" << std::endl;
}
void printExchangeStats(){
    std::cout << "No current stats" << std::endl;
    std::cout << "Wait for some time" << std::endl;
}
void placeAsk(){
    std::cout << "Place an ask amount: Enter the amount" << std::endl;
}
void placeBid(){
    std::cout << "Now Time to place a bid: Enter the amount" << std::endl;
}

int main(){
	
	
	
	return 0;
}