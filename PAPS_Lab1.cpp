#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

#include "BoardTaxi.h"
#include "BoardBus.h"
#include "BusDriver.h"
#include "TaxiDriver.h"
#include "Singleton.h"

int main()
{
    BoardBus* BB = new BoardBus();
    BoardTaxi* BT = new BoardTaxi();
    BusDriver* BD = new BusDriver();
    TaxiDriver* TD = new TaxiDriver();

    std::cout <<"1. Taxi is ready? ->"<< BT->isReady() << std::endl;
    BT->boardPassenger();
    BT->boardPassenger();
    BT->boardPassenger();
    BT->boardPassenger();
    BT->boardPassenger();
    BT->boardDriver(BD);
    std::cout << "2. Taxi is ready? ->" << BT->isReady() << std::endl;
    BT->boardDriver(TD);
    std::cout << "3. Taxi is ready? ->" << BT->isReady() << std::endl;

    Singleton* A = Singleton::getInstance();
    Singleton* B = Singleton::getInstance(); //доступ к 1 и тому же объекту
    B->addCount();
    A->addCount();
    std::cout << A->getCount() << std::endl << B->getCount() << std::endl;



    delete BB;
    delete BT;
    return 0;
}

