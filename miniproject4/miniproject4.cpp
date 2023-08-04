#include <iostream>
#include <string>
#include "Manager.h"
#include "Customer.h"
#include "DetailsOfHotel.h"
#include "FoodLinkedList.h"
#include "RoomHieracyTree.h"

using namespace std;

/*Both hotel managers and customers can log to the system*/
/*1.First step is identifying logged person as customer or hotel manager*/
void identifyingLoggedPerson()
{
    cout << "\n--------------Welcome to Plantation Hotel Management System------------------" << endl;
    int identifyingPerson;
    do
    {
        cout << "\tList of Users" << endl;
        cout << "\t1.Customer\n\t2.Manager\n\t3.Exit\n";

        cout << "Enter a Number:";
        cin >> identifyingPerson;
        switch (identifyingPerson)
        {
        case 1:
            /*2.1 if the logged person is customer this case call for customer functions*/
            c1.newCustomer(); break;
        case 2:
            /*2.2 if the logged person is manager this case call for manager functions*/
            m1.ManagerFunc(); break;
        case 3:
            cout << "Exit from Plantation Hotel management system"; break;
        default:
            cout << "Enter a Corrcet Choice\n";
        }
    } while (identifyingPerson != 1 && identifyingPerson != 2 && identifyingPerson != 3);
}

int main()
{
    cout << "\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd" << endl;
    //to logged as manager to input food list 
    identifyingLoggedPerson();
    cout << "\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd" << endl;

    //to logged as customer to do all operations
    identifyingLoggedPerson();
    cout << "\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd" << endl;

    //to logged as manager to do all manager operations
    identifyingLoggedPerson();
    cout << "\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd" << endl;

    return 0;
}

