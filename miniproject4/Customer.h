#pragma once
#include <iostream>
#include<string>
#include "Manager.h"
#include "DetailsOfHotel.h"
#include "FoodLinkedList.h"
#include "SwimmingPoolQueue.h"
#include "GymQueue.h"
#include "RoomHieracyTree.h"
using namespace std;

class Customer
{
public:
    string firstName;
    string lastName;
    string id;
    string HomeTown;
    int contactNumber=0;
    double RoomBill = 0;
    double newFoodBill = 0;
    double foodBill = foodBill + newFoodBill;
    double bill = RoomBill + foodBill;

    
    int luxarySingleBedRooms=0;
    int luxaryDoubleBedRooms=0;
    int normalSingleAcBedRooms=0;
    int normalDoubleAcBedRooms=0;
    int normalSingleNacBedRooms=0;
    int normalDoubleNacBedRooms=0;

    string bedtea = "NO";
    string breakfast = "NO";
    string cooldrinks = "NO";
    string lunch = "NO";
    string eveTea = "NO";
    string dinner = "NO";

    string Email;
    string passward;
    int sumOfPw;
    int indexOfPassward;
    int p = 0, q = 0;
    string EmailArr[100];
    int PWIndexArr[100];

    void signup()
    {
        p++;
        EmailArr[p] = Email;
        for (int i = 0; i < passward.length(); i++)
        {
            sumOfPw = indexOfPassward + (int)passward[i];
        }
        indexOfPassward = sumOfPw % 10;
        PWIndexArr[p] = indexOfPassward;
    }

    void getInforAndChekRooms()
    {

        cout << "Enter Number of Bedrooms that You Book : ";
        cout << "\n\tLuxary Single Bedrooms : ";
        cin >> luxarySingleBedRooms;
        cout << "\tLuxary Double Bedrooms : ";
        cin >> luxaryDoubleBedRooms;
        cout << "\tNormal Single AC Bedrooms : ";
        cin >> normalSingleAcBedRooms;
        cout << "\tNormal Double AC Bedrooms : ";
        cin >> normalDoubleAcBedRooms;
        cout << "\tNormal Single Non AC Bedrooms : ";
        cin >> normalSingleNacBedRooms;
        cout << "\tNormal Double Non AC Bedrooms : ";
        cin >> normalDoubleNacBedRooms;

        bool available;
        if (luxarySingleBedRooms <= h1.AvaLuxaSingBR && luxaryDoubleBedRooms <= h1.AvaLuxDoubBR && normalSingleAcBedRooms <= h1.AvaNorSingAcBR && normalDoubleAcBedRooms <= h1.AvaNorDoubAcBR && normalSingleNacBedRooms <= h1.AvaNorSingNacBR && normalDoubleNacBedRooms <= h1.AvaNorDoubNacBR)
        {
            available = true;
        }
        else
        {
            available = false;
        }
        if (available == true)
        {
            string bookingResponce;
            cout << "Rooms are available\n";
            cout << "Do you book rooms now? ";
            cin >> bookingResponce;
            if (bookingResponce == "yes" || bookingResponce == "Yes" || bookingResponce == "YES")
            {
                signup();

                cout << "Enter your first name : ";
                cin >> firstName;
                cout << "Enter your last name : ";
                cin >> lastName;
                cout << "Enter your identity number : ";
                cin >> id;
                cout << "Enter your home town : ";
                cin >> HomeTown;
                cout << "Enter your contact number : ";
                cin >> contactNumber;

                cout << "Booking is successfull!\n";
                h1.AvaLuxaSingBR -= luxarySingleBedRooms;
                h1.AvaLuxDoubBR -= luxaryDoubleBedRooms;
                h1.AvaNorSingAcBR -= normalSingleAcBedRooms;
                h1.AvaNorDoubAcBR -= normalDoubleAcBedRooms;
                h1.AvaNorSingNacBR -= normalSingleNacBedRooms;
                h1.AvaNorDoubNacBR -= normalDoubleNacBedRooms;
                h1.AvaNorSingNacBR -= normalSingleNacBedRooms;
                
                //RoomBill = (luxarySingleBedRooms*h1.luxaSingBRPrice) + (luxaryDoubleBedRooms* h1.luxDoubBRPrice) + (normalSingleAcBedRooms * h1.norSingAcBRPrice) + (normalDoubleAcBedRooms * h1.norDoubAcBRPrice) + (normalDoubleNacBedRooms * h1.norSingNacBRPrice) + (normalSingleNacBedRooms * h1.norDoubNacBRPrice);
                customerOperation();
            }
            else
            {
                cout << "Exit";
            }
        }
        else
        {
            cout << "Rooms are not available\n";
            cout << "Booking is not successfull!.\nExit";
        }
    }
    bool Login()
    {
        bool correct;
        string ReadEmail;
        string ReadPW;
        int sumOfReadPw=0;
        int indexOfReadPassward=0;
        cout << "Enter Email : ";
        cin >> ReadEmail;
        cout << "Enter Passward : ";
        cin >> ReadPW;
        for (int i = 0; i < ReadPW.length(); i++)
        {
            sumOfReadPw = indexOfReadPassward + (int)ReadPW[i];
        }
        indexOfReadPassward = sumOfReadPw % 10;
        for (q = 0; q < 100; q++)
        {
            if (EmailArr[q] == ReadEmail && PWIndexArr[q] == indexOfReadPassward)
            {
                correct = true;
                return true;
                break;
            }
            else
            {
                correct = false;
            }
        }

        if (correct != true)
        {
            return false;
        }
    }
    void newCustomer()
    {
        cout << "\n---------------------------Customer Section------------------------------\n" << endl;
        string newcus;
        cout << "Are you new customer? ";
        cin >> newcus;
        if (newcus == "yes" || newcus == "Yes" || newcus == "YES")
        {
            h1.printHotelDetails();
            cout << "Hieracy of room types: " << endl;
            showRoomHiarachy();
            string responceForSort;
            cout << "Do you want to sort rooms according to price? ";
            cin >> responceForSort;
            if (responceForSort == "yes" || responceForSort == "Yes" || responceForSort == "YES")
            {
                h1.sortRooms();
            }
            getInforAndChekRooms();
        }
        else
        {
            Login();
            customerOperation();
        }
    }
    
    /*void CalculateTotalBill()
    {
        cout << "Total Bill upto now : " << bill<<endl;
    }*/

    void BookGym()
    {
        GQ1.GEnQueue(firstName);
    }

    void BookSwimmingPool()
    {
        SQ1.SEnQueue(firstName);
    }

    void customerOperation()
    {
        int operation;
        cout << "\tList of customer Operation" << endl;
        cout << "\t1.Order Next Meal\n\t2.Book Gym\n\t3.Book Swimming Pool\n\t4.Exit\n";
        do
        {
            cout << "Enter a Number of Selected Operation of customer operation:";
            cin >> operation;
            switch (operation)
            {
            case 1:
                orderMeals(); break;
            case 2:
                BookGym(); break; 
            case 3:
                BookSwimmingPool(); break; 
            case 4:
                cout << "Exit from customer operations"; break;
            default:
                cout << "Enter a Corrcet Operation\n";
            }
        } while (operation != 4);
    }

    void showCustomerDetails()
    {
        cout << "Customer first name : " << firstName<<endl;
        cout << "Customer last name : " << lastName << endl;
        cout << "Customer identity number : " << id << endl;
        cout << "Customer email address : " << Email << endl;
        cout << "Customer home Town : " << HomeTown << endl;
        cout << "Customer contact number : " << contactNumber << endl;
        //cout << "Customer Room Bill : " << RoomBill << endl;
        //cout << "Customer Food Bill : " << foodBill << endl;
        //cout << "Customer Total Bill : " << bill << endl;
    }
    

    void orderMeals()
    {

        FL1.printFoodList();

        int identifyingMeal;

        cout << "\tMeals" << endl;
        cout << "\t1.Bed Tea\n\t2.Breakfast\n\t3.Cool Drinks\n\t4.Lunch\n\t5.Evening Tea\n\t6.Dinner\n\t7.Exit\n";
        cout << "Enter a Number:";
       //add while loop here
        cin >> identifyingMeal;
        switch (identifyingMeal)
        {
        case 1:
            cout << "What do you order for Bed tea : ";
            cin >> bedtea;
            break;
        case 2:
            cout << "What do you order for Breakfast : ";
            cin >> breakfast;
            break;
        case 3:
            cout << "What do you order for Cool Drinks : ";
            cin >> cooldrinks;
            break;
        case 4:
            cout << "What do you order for Lunch : ";
            cin >> lunch;
            break;
        case 5:
            cout << "What do you order for Evening Tea : ";
            cin >> eveTea;
            break;
        case 6:
            cout << "What do you order for Dinner : ";
            cin >> dinner;
            break;
        case 7:
            cout << "Exit from food ordering"; break;
        default:
            cout << "Enter a Corrcet Choice\n";

        }
    }

    void ShowOrderedMeals()
    {
        cout << "Bed tea : " << bedtea << endl;
        cout << "Breakfast : " << breakfast << endl;
        cout << "Cool Drinks : " << cooldrinks << endl;
        cout << "Lunch : " << lunch << endl;
        cout << "Evening Tea : " << eveTea << endl;
        cout << "Dinner : " << dinner << endl;
        cout << "Update the Food Bill\nFood Bill : ";
        cin >> newFoodBill;
    }
};

Customer c1;
