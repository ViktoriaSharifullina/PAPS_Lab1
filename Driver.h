#pragma once

class Driver
{
protected:
	int _isReady = 1;
public:
	virtual void takeSeat() = 0;
	virtual int isReady() = 0;

};