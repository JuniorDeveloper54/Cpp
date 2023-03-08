#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node* Left;
    node* Right;
    node(int value)
    {
        this->value = value;
        Left = Right = nullptr;
    }
};

class BST
{
public:
    node* root;
    BST()
    {
        root = nullptr;
    }

    void Insert(int value)
    {
        if (root == nullptr)
        {
            root = new node(value);
            return;
        }

        node* current = root;
        while (true)
        {
            if (value < current->value)
            {
                if (current->Left == nullptr)
                {
                    current->Left = new node(value);
                    return;
                }
                current = current->Left;
            }
            else if (value > current->value)
            {
                if (current->Right == nullptr)
                {
                    current->Right = new node(value);
                    return;
                }
                current = current->Right;
            }
            else
            {
                return;
            }
        }
    }

    bool Search(int value)
    {
        node* current = root;
        while (current != nullptr)
        {
            if (current->value == value)
                return true;
            else if (current->value > value)
                current = current->Left;
            else
                current = current->Right;
        }
        return false;
    }
};

int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout << bst.Search(10) << "\n"; //1
    cout << bst.Search(9) << "\n"; //1
    cout << bst.Search(20) << "\n"; //1
    cout << bst.Search(60) << "\n"; //0
    return 0;
}

