#pragma once
#include "Library.h"
#include "Date.h"


class Order {
private:
	string OrderNo;
	Date flight_date;
	string PassengerName;
	string PassengerSname;

public:
	Order() {
		OrderNo = "";
		flight_date = Date();
		PassengerName = "";
		PassengerSname = "";
	}
	string getOrder()const { return OrderNo; }
	bool operator==(string OrderNo) {
		return(this->OrderNo == OrderNo);
	}

	bool operator==(Date d) {
		return (flight_date == d);
	}
	friend istream& operator >> (istream& is, Order& obj);
	friend ostream& operator<<(ostream& os, Order& obj);
};