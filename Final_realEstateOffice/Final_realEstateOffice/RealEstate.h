#ifndef REALESTATE_H
#define REALESTATE_H

#include <string>     // must be included to use strings.
#include <iostream>
#include "pch.h"

using namespace std;  // if using includes make sure shared namespace

class RealEstate
{
	friend ostream &operator<<(ostream &, const RealEstate &);
	friend istream &operator>>(istream &, RealEstate&);
public:
	RealEstate();			//default constructor
	RealEstate(string, string, string);
	void Display();
	void Update(string, string, string);
	string getPrice();
	//int getId();
	//int getSold();
	//int getStock();
	//double getPrice();
	//RealEstate&  operator = (const RealEstate&);
	//bool operator ==  (const RealEstate&) const;
	//bool operator!=(const RealEstate& right) const //inequality operator
	//{
	//	return !(*this == right);
	//}
	//bool  operator > (const RealEstate&) const;
	//bool  operator < (const RealEstate&) const;
	//void setNewSales(RealEstate&);
	//double CalcRevenue(RealEstate& price);

private:
	string houseLocation;
	string housePrice;
	string listingNum;


};
#endif
