#pragma once
#include <iostream>
#include<string>
#include "Customer.h"
#include "Manager.h"
#include "DetailsOfHotel.h"
#include "FoodLinkedList.h"
#include "SwimmingPoolQueue.h"
#include "GymQueue.h"
using namespace std;

class SwimmingPoolQueue
{
private:
	int sFront;
	int sRear;
	int sSize;
	int sCapacity; 
	string* sData; 

public:
	SwimmingPoolQueue()
	{
		sCapacity = 25;
		sSize = 0;
		sFront = 0;
		sRear = 0;
		sData = new string[sCapacity];
	}

	void SEnQueue(string cusName)
	{
		if (sSize == sCapacity)
		{
			cout << "Swimming Pool Queue is full" << endl;
		}
		else
		{
			sData[sRear] = cusName;
			sRear = (sRear + 1) % sCapacity;
			sSize++;
			cout << "Booking of swimming pool is sucsessful" << endl;
		}
	}

	void SDeQueue()
	{
		if (sSize == 0)
		{
			cout << "Swimming Pool Queue is Empty" << endl;
		}
		else
		{
			string temp = sData[sFront];
			sSize--;
			cout << "Removing from swimming pool is sucsessful" << endl;
		}
	}

	void sPoolQueuePrint()
	{
		int index = sFront;
		for (int i = 0; i < sSize; i++)
		{
			cout << sData[index] ;
			cout << "\t";
			index = (index + 1) % sCapacity;
		}
		cout << endl;
	}

};

SwimmingPoolQueue SQ1;

