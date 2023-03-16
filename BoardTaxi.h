#pragma once

#include "BoardAnyCar.h"
#include "TaxiDriver.h"
#include <typeinfo>
#include <string>

class BoardTaxi : public BoardAnyCar {
private:
	int passAmount;
	int _driver;
	int passCup = 4;
public:
	BoardTaxi() {
		passAmount = 0;
		_driver = 0;
	}
	int isReady() {
		return ((passAmount == passCup) && (_driver == 1));
	}
	void boardPassenger() {
		if (passAmount < 4) {
			passAmount = passAmount + 1;
		}
	}
	void boardDriver(Driver* driver) {

		if ((_driver == 0) && (driver->isReady()) && (std::string("class TaxiDriver")._Equal(typeid(*driver).name()))) {
			driver->takeSeat();
			_driver = _driver + 1;
		}
	}
};
