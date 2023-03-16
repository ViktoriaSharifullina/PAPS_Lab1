#pragma once
#include "Driver.h"

// ����������� ������� ��� ������������ ������ ������� �������

class BoardAnyCar {
public:
	virtual void boardPassenger() = 0;
	virtual void boardDriver(Driver* driver) = 0;
	virtual int isReady() = 0; //�������� �������� � ���������� � ����������� ��������� � �����
};