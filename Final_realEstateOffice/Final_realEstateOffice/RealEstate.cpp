//Implementation file for BookStore class

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "RealEstate.h"

using namespace std;

/**
@pre		none
@post	instance of class created

// constructors, invokes Person default constructor as well.
**/
RealEstate::RealEstate() {
}

/**
@pre		none
@post	instance of class created
@parm	name, string
@parm	howmuch, double
@parm	sold, int
@parm	stock, int
@parm	bookid, int

// constructors, parameterized constructor
**/
RealEstate::RealEstate(string address, string price, string number) //constracter initonization.
{
	houseLocation = address;
	housePrice = price;
	listingNum = number;
	return;
}

void RealEstate::Update(string address, string price, string number) //constracter initonization.
{
	houseLocation = address;
	housePrice = price;
	listingNum = number;
	return;
}
/**
@pre	existing instance of class
@post	class variables displayed
@return	void

// Display
**/
void RealEstate::Display() {
	cout << "Address: " << houseLocation << endl;
	cout << "Price: " << housePrice << endl;
	cout << "Listing number: " << listingNum << endl;

	cout << endl;
	return;
}   // end Display()

//
///**
//@pre	existing instance of class
//@return	title, string
//
////  get book name
//**/
//string Book::getName()
//{
//	return title;
//}
//
///**
//@pre	existing instance of class
//@return	id, int
//
////  get book ID
//**/
//int Book::getId()
//{
//	return id;
//}
//
/**
@pre	existing instance of class
@return	stock, int

//  get the number of book in stock.
**/
string RealEstate::getPrice()
{
	return housePrice;
}

///**
//@pre	existing instance of class
//@return	units_sold, int
//
////  get the number of copies sold.
//**/
//int Book::getSold()
//{
//	return units_sold;
//}
//
//
///**
//@pre	existing instance of class
//@return	price, double
//
////  get the price of book.
//**/
//double Book::getPrice()
//{
//	return price;
//}
//
///**
//@pre	existing instance of class
//@return	void
//
////  set the new sales data.
//**/
//void Book::setNewSales(Book& oneid)
//{
//	units_sold = oneid.getSold();
//	stock = oneid.getStock();
//	id = oneid.getId();
//}


///**
//@pre	existing instance of class
//@return	double, revenue
//
////  get the revenue of one kind of book.
//**/
//double Book::CalcRevenue(Book& oneid)
//{
//	revenue = oneid.units_sold * oneid.price;
//	cout << "==============================================\n";
//	cout << "The new revenue of " << oneid.title << ": $" << revenue << endl;
//	cout << "==============================================\n";
//	cout << endl;
//	return revenue;
//}

//
//
////overload >>
ostream &operator<<(ostream &output, const RealEstate &rhs)
{
	output << rhs.houseLocation << " "
		<< rhs.housePrice << " "
		<< rhs.listingNum;

	return output;
}

//overload >>
istream &operator>>(istream &input, RealEstate &who)
{
	input >> who.houseLocation;
	input.ignore(1);
	input >> who.housePrice;
	input.ignore(1);
	input >> who.listingNum;

	return input;
}
