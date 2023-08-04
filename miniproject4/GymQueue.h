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

class GymQueue
{
private:
	int gFront;
	int gRear;
	int gSize;
	int gCapacity; 
	string* gData; 

public:
	GymQueue()
	{
		gCapacity = 25;
		gSize = 0;
		gFront = 0;
		gRear = 0;
		gData = new string[gCapacity];
	}

	void GEnQueue(string cusName)
	{
		if (gSize == gCapacity)
		{
			cout << "Gym Queue is full" << endl;
		}
		else
		{
			gData[gRear] = cusName;
			gRear = (gRear + 1) % gCapacity;
			gSize++;
			cout << "Booking of Gym is sucsessful" << endl;
		}
	}

	void GDeQueue()
	{
		if (gSize == 0)
		{
			cout << "Gym Queue is Empty" << endl;
		}
		else
		{
			string temp = gData[gFront];
			gSize--;
			cout << "Removing from Gym is sucsessful" << endl;
		}
	}

	void GQueuePrint()
	{
		int index = gFront;
		for (int i = 0; i < gSize; i++)
		{
			cout << gData[index];
			cout << "\t";
			index = (index + 1) % gCapacity;
		}
		cout << endl;
	}

};

GymQueue GQ1;
