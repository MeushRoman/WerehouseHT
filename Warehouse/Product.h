#pragma once
#include <iostream>
#include "date_.h"
#include <string>

using namespace std;

class Product abstract 
{
	int price;
	string color;
	string name;
	date_ expDate;
	
	int id;
	static int prodCode;
	
public:
	Product(string name, int price, string color, date_ expDate);
	Product();
	void setPrice(int price);
	void setColor(string color);
	void setName(string name);
	void setExpDate(date_ expDate);
	void setExpDate2(int day, int month, int year);

	int getPrice() const { return price; }
	int leftDays() const;
	int getId()const { return id; }

	string getName() const { return name; }
	string getColor() const { return color; }

	string getStrExpDate()const { return expDate.getStrInfo(); }
	date_ getExpDate()const { return expDate; }

	string getProductType()const { return string(typeid(*this).name()).substr(6); }

	virtual void info() const;
	
	virtual string getStringFileInfo()const;
	virtual void readStringInfo(string &str);
};

