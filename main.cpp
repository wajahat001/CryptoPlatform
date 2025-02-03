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
void printWallet(){
    std::cout << "Your wallet is empty currently" << std::endl;
    std::cout << "The above is the data in your wallet" << std::endl;
}
void gotoNextTimeFrame(){
    std::cout << "Continue....." << std::endl;
    std::cout << "Moving to the next time frame" << std::endl;
}

void processUserOption(int userOption){
    if (userOption == 0)
    { //bad option
        std::cout << "The Option you entered is: " << userOption << std::endl;
        std::cout << "Bad Input" << std::endl;
    }
    else if (userOption == 1)
    {
        printHelp();
    }
    else if (userOption == 2)
    {
        printExchangeStats();
    }
    else if (userOption == 3)
    {
        placeAsk();
    }
    else if (userOption == 4)
    {
        placeBid();
    }
    else if (userOption == 5)
    {
        printWallet();
    }
    else if (userOption == 6)
    {
        gotoNextTimeFrame();
    }
    else
    {
        std::cout << "The Option you entered is: " << userOption << std::endl;
        std::cout << "Invalid input try again" << std::endl;
    }
}


int main(){
	
	   while(true){
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
	return 0;
}














