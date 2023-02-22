#include "CSCdate.h"
#include <iostream>
#include <string>
using namespace std;


void CSCdate::setDay(int d)
{
	if (d >= 1 && d <= 31) {
		day = d;
	}
}

int CSCdate::getDay() const
{
	return day;
}

void CSCdate::setMonth(int m)
{
	if (m >= 1 && m <= 12) {
		month = m;
	}
}

int CSCdate::getMonth() const
{
	return month;
}

string CSCdate::getMonthName() const
{
	string monthName;

	switch (month) {
	case 1: 
		monthName = "January";
		break;
	case 2: 
		monthName = "February";
		break;
	case 3: 
		monthName = "March";
		break;
	case 4:
		monthName = "April";
		break;
	case 5:
		monthName = "May";
		break;
	case 6:
		monthName = "June";
		break;
	case 7:
		monthName = "July";
		break;
	case 8: 
		monthName = "August";
		break;
	case 9:
		monthName = "September";
		break;
	case 10: 
		monthName = "October";
		break;
	case 11: 
		monthName = "November";
		break;
	case 12: 
		monthName = "December";
		break;

	}

	return monthName;
}

void CSCdate::setYear(int y)
{
	if (y >= 1800 && y <= 2022) {
		year = y;
	}
}

int CSCdate::getYear() const
{
	return year;
}

CSCdate::CSCdate(int d, int m, int y)
{
	if (d < 1 || d > 31) {
		d = 1;
	}
	if (m < 12 || m > 12) {
		m = 1;
	}
	if (y < 1800 || y >> 2022) {
		y = 1800;
	}
	day = d;
	month = m;
	year = y;
}







