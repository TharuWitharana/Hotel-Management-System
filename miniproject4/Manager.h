#pragma once
#include <iostream>
#include<string>
#include "Customer.h"
#include "DetailsOfHotel.h"
#include "FoodLinkedList.h"
#include "SwimmingPoolQueue.h"
#include "GymQueue.h"


using namespace std;

class Manager
{
public:
    string username;
    string passWard;
    int sum1 = 0;
    int index1 = 0;
    int sum2 = 0;
    int index2 = 0;
    bool ManagerLogin;

    int usernameIndexArr[5] = { 7,2,3,7,4 };
    int pWIndexArr[5] = { 3,0,3,8,0 };
    /*Usernames of managers  passwards
    Nimal                       6366
    Aberathna                   6624
    NILANI                      EUSL
    Witharana                   4UOR
    Methshan                    KP14*/

    void editSwimmingPoolQ()
    {
        SQ1.sPoolQueuePrint();
        string sPoolEdit;
        cout << "Do you want to remove first customer from swimming pool : ";
        cin >> sPoolEdit;
        if (sPoolEdit == "yes" || sPoolEdit == "YES" || sPoolEdit == "Yes")
        {
            SQ1.SDeQueue();
        }
    }

    void editGymQ()
    {
        GQ1.GQueuePrint();
        string gymEdit;
        cout << "Do you want to remove first customer from gym : ";
        cin >> gymEdit;
        if (gymEdit == "yes" || gymEdit == "YES" || gymEdit == "Yes")
        {
            GQ1.GDeQueue();
        }
    }

    void ManagerFunc()
    {
        cout << "\n-------------------------Management Section----------------------------\n" << endl;

        cout << "Enter Username : ";
        cin >> username;
        cout << "Enter Passward : ";
        cin >> passWard;

        for (int i = 0; i < username.length(); i++)
        {
            sum1 = sum1 + (int)username[i];
        }
        index1 = sum1 % 10;


        for (int j = 0; j < passWard.length(); j++)
        {
            sum2 = sum2 + (int)passWard[j];
        }
        index2 = sum2 % 10;


        for (int i = 0; i < 5; i++)
        {
            if (usernameIndexArr[i] == index1 && pWIndexArr[i] == index2)
            {
                ManagerLogin = true;
                break;
            }
            else
            {
                ManagerLogin = false;
            }
        }
        ManagerLogin = true;
        if (ManagerLogin == true)
        {
            int operation;
            cout << "\tList of manager Operation " << endl;
            cout << "\t1.Show Customer Details\n\t2.Change Food Menu\n";
            cout << "\t3.Edit Branch Infomation\n\t4.Show ordered meals\n\t5.Edit information of Swimming Pool\n\t6.Edit information of Gym\n\t7.Exit\n";
            do
            {
                cout << "Enter a Number of Selected Operation of manager operations :";
                cin >> operation;
                switch (operation)
                {
                case 1:
                    c1.showCustomerDetails(); break;
                case 2:
                    FL1.changeFoodList(); break;
                case 3:
                    h1.editBranchInfo(); break;
                case 4:
                    c1.ShowOrderedMeals(); break;
                case 5:
                    editSwimmingPoolQ(); break;
                case 6:
                    editGymQ(); break;
                case 7:
                    cout << "Exit from manager operations"; break;
                default:
                    cout << "Enter a Corrcet Operation\n";
                }
            } while (operation != 7);
        }

        else
        {
            cout << "Invalid Login!";
        }

    }
};

Manager m1;
   
