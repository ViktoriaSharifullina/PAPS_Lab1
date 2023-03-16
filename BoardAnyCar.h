#pragma once
#include "Driver.h"

// Абстрактная фабрика для производства класса котроля посадки

class BoardAnyCar {
public:
	virtual void boardPassenger() = 0;
	virtual void boardDriver(Driver* driver) = 0;
	virtual int isReady() = 0; //контроль загрузки и готовности к отправлению автобусов и такси
};