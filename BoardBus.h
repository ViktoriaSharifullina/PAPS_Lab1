#pragma once
#include "BoardAnyCar.h"
#include "BusDriver.h"
#include <string>
#include <typeinfo>

// Фабрика для автобуса

class BoardBus : public BoardAnyCar
{
private:
	int passAmount;
	int _driver;
	int passCup = 30;

public:

	BoardBus() {
		passAmount = 0;
		_driver = 0;
	}

	int isReady() {
		return (passAmount == passCup) && (_driver == 1);
	}

	void boardPassenger() {
		if (passAmount < 30) {
			passAmount = passAmount + 1;
		}
	}

	void boardDriver(Driver* driver) {

		if ((_driver == 0) && (driver->isReady()) && (std::string("class BusDriver")._Equal(typeid(*driver).name()))) {
			driver->takeSeat();
			_driver = 1;
		}
	}
};
