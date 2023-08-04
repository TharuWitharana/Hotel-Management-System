#pragma once
#include <iostream>
#include<string>
#include "Customer.h"
#include "Manager.h"
#include "DetailsOfHotel.h"
#include "SwimmingPoolQueue.h"
#include "GymQueue.h"
using namespace std;

/*FOOD LIST IS STORED IN A LINKED LIST DATA STRUCTURE. INSERT LAST OPERATION AND ALL DELETE OPERATIONS ARE USED TO INSERT AND DELETE 
FOODS BY MANAGER*/
/*BOTH CUSTOMER AND MANAGER CAN USE printFoodList(); FUNCTION TO PRINT THE FOOD LIST*/

class FoodLinkedList
{
public:
    string food;
    FoodLinkedList* next;

    FoodLinkedList()
    {
        food = "No";
        next = NULL;
    }
    FoodLinkedList(string food)
    {
        this->food = food;
        next = NULL;
    }
};

class foodList
{
private:
    FoodLinkedList* head;
    FoodLinkedList* tail;
    int numOfFoods;

public:
    foodList()
    {
        head = NULL;
        tail = NULL;
        numOfFoods = 0;
    }

    void insertLast()
    {
        string newfood;
        cout << "Enter the new food : ";
        cin >> newfood;
        FoodLinkedList* temp = new FoodLinkedList(newfood);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            numOfFoods++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            numOfFoods++;
        }
    }

   
    void removeFirst()
    {
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else
        {
            FoodLinkedList* temp = head;
            if (numOfFoods == 1)
            {
                head = NULL;
                tail = NULL;
                numOfFoods--;
            }
            else
            {
                head = head->next;
                delete temp;
                numOfFoods--;
            }
        }

    }

    void removeLast()
    {
        if (numOfFoods == 0)
        {
            cout << "List is empty";
        }
        else
        {
            FoodLinkedList* temp = head;
            if (numOfFoods == 1)
            {
                head = NULL;
                tail = NULL;
                numOfFoods--;
            }
            else
            {
                FoodLinkedList* current = head;
                for (int i = 0; i < numOfFoods - 2; i++)
                {
                    current = current->next;
                }
                tail = current;
                current->next = NULL;
                delete temp;
                numOfFoods--;
            }
        }
    }

    void printFoodList()
    {
        FoodLinkedList* current = head;
        cout << "\tToday Food List: ";
        while (current != NULL)
        {
            cout << current->food << " \t";
            current = current->next;
        }
        cout << endl;
    }

    void removeAt()
    {
        printFoodList();
        int pos;
        int eneteredPOs;
         
        string newfood;
        cout << "Enter the position of removing food : ";
        cin >> eneteredPOs;
        pos = eneteredPOs - 1; // first showed food is enetered as first position by manager
        if (pos < 0 || pos >= numOfFoods)
        {
            cout << "Invalid position";
        }
        else if (pos == 0)
        {
            removeFirst();
        }
        else if (pos == numOfFoods - 1)
        {
            removeLast();
        }
        else
        {
            FoodLinkedList* current = head;
            for (int i = 0; i < pos - 1; i++)
            {
                current = current->next;
            }
            FoodLinkedList* temp = current->next;
            current->next = current->next->next;
            delete temp;
            numOfFoods--;
        }
    }

    void changeFoodList()
    {
        int opOfFoodList;
        cout << "\tList of food Operation" << endl;
        cout << "\t1.Insert a food\n\t2.Remove a food\n\t3.Print food menu\n\t4.Exit\n";
        do
        {
            cout << "Enter a Number of Selected Operation of food menu :";
            cin >> opOfFoodList;
            switch (opOfFoodList)
            {
            case 1:
                insertLast(); break;
            case 2:
                removeAt(); break;
            case 3:
                printFoodList(); break;
            case 4:
                cout << "Exit from food menu\n"; break;
            default:
                cout << "Enter a Corrcet Operation\n";
            }
        } while (opOfFoodList != 4);
    }
};

foodList FL1;

