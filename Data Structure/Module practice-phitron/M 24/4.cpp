#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l,r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    //enqueue operation TC O(1)
    void enqueue(int value)
    {
        if(sz == MAX_SIZE)
        {
            cout << "Queue is full.\n";
            return;
        }
        r++;
        if(r == MAX_SIZE)//if r crossed the array size
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }
    //dequeue operation TC O(1)
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty"<<"\n";
            return;
        }
        l++;
        if(l == MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }

    //TC O(1)
    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty"<<"\n";
            return -1;
        }
        return a[l];
    }
    //TC O(1)
    int size()
    {
        return sz;
    }


};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";

    cout<<q.size()<<"\n";


    return 0;
}
