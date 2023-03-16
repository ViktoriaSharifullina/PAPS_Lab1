#pragma once
#include "Driver.h"

class BusDriver : public Driver {
public:

	int isReady() {
		return _isReady;
	}
	void takeSeat() {
		_isReady = 0;
	}

	BusDriver() {}
	~BusDriver() {}
};
