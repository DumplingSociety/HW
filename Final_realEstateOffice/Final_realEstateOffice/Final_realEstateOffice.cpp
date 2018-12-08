// Final_realEstateOffice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "RealEstate.h"
#include <string>
#include <vector>
#include <sstream> 


using namespace std;
template <class T>
void listArr(T* elements, int start, int end);
template <class T>
void reHeapDown(T * elements, int root, int bottom);
template <class T>
void Swap(T * elements, int x, int y);
template <class T>
void HeapSort(T * elements, int root, int bottom);

int main()
{
	int count = 0;
	RealEstate list[10];
	string houseAddr;
	//int cost;
	string price;
	string houseId;
	vector<int> priceList;
	string listNum;
	ofstream myOutput;						// output-file stream variables declaration 
	ifstream in;

	string line;
	/*--------------read in original inventory from Booklist.txt----------------*/
	in.open("HouseData.txt");
	if (in.fail())				// Test if the file can be open
	{
		cout << "Error opening HouseData.txt\n";
		exit(1);
	}
	while (getline(in, line))
	{
		stringstream linestream(line);
		getline(linestream, houseAddr, ',');
		getline(linestream, price, ',');
		getline(linestream, listNum, ',');
		list[count].Update(houseAddr, price, listNum);
		cout << houseAddr << "---" << price << "-" << houseId << endl;
		//houseAddr >> number2 >> houseId;
		count++;

	}
	int arr[2];
	//int arr[cnt];
	for (int i = 0; i < count; i++)
	{
	//	list[i].Display();					 // Calls to the member function Dispaly
	//	cout << stoi(list[i].getPrice());
		//arr.push_back(stoi(list[i].getPrice()));
		arr[i] = stoi(list[i].getPrice());
	//	 arr[i] = stoi(list[i].getPrice());
		 cout << arr[i] << endl;
	}

	cout << "Heap sort\n";
	HeapSort(arr, 0, count);
	listArr(arr, 0, count);

}

/**
@pre	int array
@post	array displayed
@param	arr  address of an int array
@param	start int starting point of array
@param	end int ending point of array
*/
template <class T>
void listArr(T* arr, int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;

	//  Please write your code. for the display
}


/**
   @pre		integer array
   @post	array displayed
   @param	arr  address of an int array
   @param	start int starting point of array
   @param	end int ending point of array

   reHeapDown(heap, root, bottom)
   if heap element[root] is not a leaf
	Set maxChild to index of child with larger value
	if heap element[root] < heal element[maxChild]
	  Swap(heap elements[root], heap lements[maxChild]
	  reHeapDown(heap, maxChild, bottom

*/
template <class T>
void  reHeapDown(T* elements, int root, int bottom)
{
	int maxC, rightC, leftC;    // maxChild, rightChild, leftChild
	leftC = root * 2 + 1;
	rightC = root * 2 + 2;

	if (leftC <= bottom)  // compare for positions
	{
		if (leftC == bottom)
			maxC = leftC;
		else
		{
			if (elements[leftC] <= elements[rightC])
				maxC = rightC;
			else
				maxC = leftC;
		}
		if (elements[root] < elements[maxC])
		{
			Swap(elements, root, maxC);
			reHeapDown(elements, maxC, bottom);
		}

	}
}

/**
	@pre	int array
	@post	array two items swapped
	@param	arr  address of array
	@param	x int subscript to be swapped
	@param	y int subscript to be swapped

	swap the contents of two elements of an array

*/

template <class T>
void Swap(T* elements, int x, int y)
{
	int temp = elements[x];
	elements[x] = elements[y];
	elements[y] = temp;
	//  Please write your code. for the swap
}

/**
   @pre		integer array
   @post	array displayed
   @param	arr  address of an int array
   @param	start int starting point of array
   @param	end int ending point of array

   HeapSort
   for index going from last node up tp next to root node,
   swap data in root node with values[index]
   reHeapDown(values, start, end-1)
**/
template <class T>
void  HeapSort(T* arr, int start, int end)
{
	for (int i = end; i >= 1; i--)
	{
		Swap(arr, start, i);
		reHeapDown(arr, 0, i - 1);
	}
}