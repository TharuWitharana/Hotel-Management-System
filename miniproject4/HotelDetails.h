#pragma once
/*#include <iostream>
#include "Customer.h"
#include "Manager.h"
#include "FoodLinkedList.h"
#include "SwimmingPoolQueue.h"
#include "GymQueue.h"
using namespace std;

class DetailsOfHotel {

public:

    int luxaSingBRPrice = 3500;
    int luxDoubBRPrice = 6500;
    int norSingAcBRPrice = 2500;
    int norDoubAcBRPrice = 4800;
    int norSingNacBRPrice = 1500;
    int norDoubNacBRPrice = 2800;

    int AvaLuxaSingBR = 10;
    int AvaLuxDoubBR = 25;
    int AvaNorSingAcBR = 15;
    int AvaNorDoubAcBR = 25;
    int AvaNorSingNacBR = 40;
    int AvaNorDoubNacBR = 40;

    int AvaGymSpaces=25;
    int AvaSwimmingPoolSpaces=25;

    void printHotelDetails()
    {
        cout << "\n\t-------Hotel Details-------\n" << endl;
        cout << "Branch        : Kithulgala" << endl;
        cout << "Address       : Plantation Hotel, Ginigathhena Road, Kithulgala" << endl;
        cout << "Contact Number: 0362287782" << endl;
        cout << "Available rooms\t\t\t Price of one room per day" << endl;
        cout << "Luxury double bedrooms\t\t\t" << luxDoubBRPrice << endl;
        cout << "Luxury single bedroom\t\t\t" << luxaSingBRPrice << endl;
        cout << "Normal double AC bedroom\t\t" << norDoubAcBRPrice << endl;
        cout << "Normal single AC bedroom\t\t" << norSingAcBRPrice << endl;
        cout << "normal double Non AC bedroom\t\t" << norDoubNacBRPrice << endl;
        cout << "normal single Non AC bedroom\t\t" << norSingNacBRPrice << endl;
        cout << "Available facilities: Gym\n\t\t      Swimmimg Pool\n\t\t      Bar\n\t\t      Bath on Kelani River\n\t\t      White Water Rafting on Kelani River" << endl;

    }

    void editBranchInfo()
    {
        cout << "Enter the price of luxury single bedroom : ";
        cin >> luxaSingBRPrice;
        cout << "Enter the price of luxury double bedrooms : ";
        cin >> luxDoubBRPrice;
        cout << "Enter the price of normal single AC bedroom : ";
        cin >> norSingAcBRPrice;
        cout << "Enter the price of normal double AC bedroom : ";
        cin >> norDoubAcBRPrice;
        cout << "Enter the price of normal single Non AC bedroom : ";
        cin >> norSingNacBRPrice;
        cout << "Enter the price of normal double Non AC bedroom : ";
        cin >> norDoubNacBRPrice;

        cout << "Enter available luxury single bedrooms : ";
        cin >> AvaLuxaSingBR;
        cout << "Enter available luxury double bedrooms : ";
        cin >> AvaLuxDoubBR;
        cout << "Enter available normal single AC bedrooms : ";
        cin >> AvaNorSingAcBR;
        cout << "Enter available normal double AC bedrooms : ";
        cin >> AvaNorDoubAcBR;
        cout << "Enter available normal single Non AC bedrooms : ";
        cin >> AvaNorSingNacBR;
        cout << "Enter available normal double Non AC bedrooms : ";
        cin >> AvaNorDoubNacBR;

        cout << "Enter available normal double Non AC bedrooms : ";
        cin >> AvaNorDoubNacBR;
        cout << "Enter available normal double Non AC bedrooms : ";
        cin >> AvaNorDoubNacBR;

    }
    void editBranchInfo()
    {
        string changeprice;
        cout << "Do you want to change price of rooms?";
        cin >> changeprice;

        string changeAvaRooms;
        cout << "Do you want to change number of available rooms?";
        cin >> changeAvaRooms;

        if (changeprice == "yes" || changeprice == "Yes" || changeprice == "YES")
        {
            cout << "Enter new prices of Bedrooms : ";
            cout << "\n\tLuxary Single Bedrooms : ";
            cin >> luxaSingBRPrice;
            cout << "\tLuxary Double Bedrooms : ";
            cin >> luxDoubBRPrice;
            cout << "\tNormal Single AC Bedrooms : ";
            cin >> norSingAcBRPrice;
            cout << "\tNormal Double AC Bedrooms : ";
            cin >> norDoubAcBRPrice;
            cout << "\tNormal Single Non AC Bedrooms : ";
            cin >> norSingNacBRPrice;
            cout << "\tNormal Double Non AC Bedrooms : ";
            cin >> norDoubNacBRPrice;
        }

        if (changeAvaRooms == "yes" || changeAvaRooms == "Yes" || changeAvaRooms == "YES")
        {
            cout << "Enter Number Bedrooms Available : ";
            cout << "\n\tLuxary Single Bedrooms : ";
            cin >> AvaLuxaSingBR;
            cout << "\tLuxary Double Bedrooms : ";
            cin >> AvaLuxDoubBR;
            cout << "\tNormal Single AC Bedrooms : ";
            cin >> AvaNorSingAcBR;
            cout << "\tNormal Double AC Bedrooms : ";
            cin >> AvaNorDoubAcBR;
            cout << "\tNormal Single Non AC Bedrooms : ";
            cin >> AvaNorSingNacBR;
            cout << "\tNormal Double Non AC Bedrooms : ";
            cin >> AvaNorDoubNacBR;
        }
    }

    //ARRAY DATA STRUCTURE HAS BEEN USED TO SORT THE ROOM LIST ACCORDING TO PRICE OF ROOMS
    void sortRooms()
    {
        int priceArr[6] = { h1.luxaSingBRPrice,h1.luxDoubBRPrice,h1.norSingAcBRPrice,h1.norDoubAcBRPrice,h1.norSingNacBRPrice,h1.norDoubNacBRPrice };

        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                if (priceArr[i] > priceArr[j])
                {
                    int temp = priceArr[i];
                    priceArr[i] = priceArr[j];
                    priceArr[j] = temp;
                }
            }
        }
        cout << "Type of the Bed Room \t\t\t" << "price of the Bed Room \t\t" << endl;
        for (int val : priceArr)
        {
            if (val == luxaSingBRPrice)
                cout << "Luxary Single Bed Room\t\t\t" << val << endl;
            else if (val == luxDoubBRPrice)
                cout << "Luxary Double Bed Room\t\t\t" << val << endl;
            else if (val == norSingAcBRPrice)
                cout << "Normal Single AC Bed Room\t\t" << val << endl;
            else if (val == norDoubAcBRPrice)
                cout << "Normal Double AC Bed Room\t\t" << val << endl;
            else if (val == norSingNacBRPrice)
                cout << "Normal Single Non AC Bed Room\t\t" << val << endl;
            else if (val == norDoubNacBRPrice)
                cout << "Normal Double Non AC Bed Room\t\t" << val << endl;
        }
    }

};

DetailsOfHotel h1;*/


