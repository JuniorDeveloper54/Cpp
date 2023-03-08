#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prv;
    Node* next;
};

class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    //insert at head
    void InsertAtHead(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prv = nullptr;
        newNode->next = head;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            head->prv = newNode;
            head = newNode;
        }
    }

    //insert at tail
    void InsertAtTail(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prv = tail;
        newNode->next = nullptr;

        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    //insert at mid
    void InsertAtMid(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prv = nullptr;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            Node* current = head;
            int count = 0;
            while (current != nullptr)
            {
                count++;
                current = current->next;
            }

            current = head;
            int middle = count / 2;
            for (int i = 0; i < middle; i++)
            {
                current = current->next;
            }


            newNode->prv = current;
            newNode->next = current->next;

            if (current->next == nullptr)
            {
                tail = newNode;
            }
            else
            {
                current->next->prv = newNode;
            }

            current->next = newNode;
        }
    }

    // Printing
    void print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dl;

    dl.InsertAtHead(1);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);

    dl.InsertAtTail(4);
    dl.InsertAtTail(5);
    dl.InsertAtTail(6);

    dl.InsertAtMid(7);
    dl.InsertAtMid(8);
    dl.InsertAtMid(10);

    dl.print();
    return 0;
}
