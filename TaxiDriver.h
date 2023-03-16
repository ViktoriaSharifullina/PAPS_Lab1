#pragma once
#include "Driver.h"
class TaxiDriver : public Driver {
public:

	int isReady() {
		return _isReady;
	}
	void takeSeat() {
		_isReady = 0;
	}

	TaxiDriver() {}
	~TaxiDriver() {}
};
