#pragma once
#include <iostream>
#include <vector>
#include<cstddef>
#include<limits>
#include<vector>
#include<string>

using namespace std;

class node
{
public:
    string roomType;
    node* left;
    node* right;
    node* parent;

    node()
    {
        roomType = "";
        left = NULL;
        right = NULL;
        parent = NULL;
    }

    node(string roomType)
    {
        this->roomType = roomType;
        left = NULL;
        right = NULL;
        parent = NULL;

    }
};


class showRooms {
private:
    node* root;
    int size;
public:
    showRooms() {
        root = NULL;
        size = 0;
    }
    void insert(int key, string roomType)
    {
        node* temp = new node(roomType);
        node* current = root;
        node* previous = NULL;

    }
};
struct Trunk
{
    Trunk* prev;
    string str;
    Trunk()
    {
        this->prev = NULL;
        this->str = "";
    }

    Trunk(Trunk* prev, string str)
    {
        this->prev = prev;
        this->str = str;
    }
};
void showTrunks(Trunk* p)
{
    if (p == nullptr) {
        return;
    }
    showTrunks(p->prev);
    if (size(p->str) == 3)
    {
        p->str = "";
    }
    cout << p->str;


}

void printTree(node* root, Trunk* prev, bool isLeft)
{
    if (root == nullptr) {
        return;
    }

    string prev_str = "    ";
    Trunk* trunk = new Trunk(prev, prev_str);

    printTree(root->right, trunk, true);

    if (!prev) {
        trunk->str = "———";
    }
    else if (isLeft)
    {
        trunk->str = "———";
        prev_str = "   |";
    }
    else {
        trunk->str = "———";
        prev->str = prev_str;
    }

    showTrunks(trunk);
    cout << " " << root->roomType << endl;

    if (prev) {
        prev->str = prev_str;
    }
    trunk->str = "   |";

    printTree(root->left, trunk, false);
}
void showRoomHiarachy()
{
    node* root = new node("rooms");
    root->left = new node("Luxury");
    root->right = new node("Normal");
    root->left->left = new node("Single");
    root->left->right = new node("Double");
    root->right->left = new node("Single");
    root->right->right = new node("Double");
    root->right->left->left = new node("  AC");
    root->right->left->right = new node("  Non AC");
    root->right->right->left = new node("  AC");
    root->right->right->right = new node("  Non AC");

    printTree(root, nullptr, false);
}

    
