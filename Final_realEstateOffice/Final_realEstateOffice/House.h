#ifndef _H
#define BOOKSTORE_H

#include <string>     // must be included to use strings.
#include <iostream>
#include "pch.h"
using namespace std;  // if using includes make sure shared namespace


					  // specification for Address class
					  //
					  //
class Book
{
	friend ostream &operator<<(ostream &, const Book &);
	friend istream &operator>>(istream &, Book&);
public:
	Book();			//default constructor
	Book(string, double, int, int, int);			//default constructor
	void Update(string, double, int, int, int);

	void Display();
	string getName();
	int getId();
	int getSold();
	int getStock();
	double getPrice();
	Book&  operator = (const Book&);
	bool operator ==  (const Book&) const;
	bool operator!=(const Book& right) const //inequality operator
	{
		return !(*this == right);
	}
	bool  operator > (const Book&) const;
	bool  operator < (const Book&) const;
	void setNewSales(Book&);
	double CalcRevenue(Book& price);

private:
	string title;
	double price;
	int units_sold;
	int stock;
	int id;
	double revenue;
	double totle_revenue;
};
#endif