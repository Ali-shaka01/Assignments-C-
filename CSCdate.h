#pragma once

#include <iostream>
#include <string>
using namespace std;

class CSCdate {

private:
	int day;
	int month;
	int year;
	

public:
	void setDay(int d);
	int getDay() const;

	void setMonth(int m);
	int getMonth() const;
	string getMonthName() const;

	void setYear(int y);
	int getYear() const;

	CSCdate(int d = 1, int m = 1, int y = 1800);

	
};