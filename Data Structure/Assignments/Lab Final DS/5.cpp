#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10;

class Queue
{
public:
    int arr[MAX_SIZE];
    int frontIndex, rearIndex;
public:
    Queue()
    {
        frontIndex = -1;
        rearIndex = -1;
    }

    bool isFull()
    {
        return rearIndex == MAX_SIZE - 1;
    }

    bool isEmpty()
    {
        return frontIndex == -1 || frontIndex > rearIndex;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        if (isEmpty())
        {
            frontIndex = 0;
        }
        rearIndex++;
        arr[rearIndex] = value;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        int frontValue = arr[frontIndex];
        frontIndex++;
        return frontValue;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[frontIndex];
    }
};

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front: " << q.front() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Front: " << q.front() << endl;
    cout << endl;

    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    //when queue is full
    q.enqueue(11);
    cout << endl;


    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Front: " << q.front() << endl;

    return 0;
}
