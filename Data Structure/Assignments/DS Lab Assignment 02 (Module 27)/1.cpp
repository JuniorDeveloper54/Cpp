#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template<class t>
class Queue
{
public:
    t* a;
    int r,l,cap,sz;

    Queue()
    {
        a = new t[1];
        r = -1;
        l = 0;
        sz = 0;
        cap = 1;
    }
    void RemoveChar()
    {
        if(l > r)
        {
            int id = 0;
            t *temp = new t[cap];
            for(int i = l; i < cap; i++)
            {
                temp[id] = a[i];
                id++;
            }
            for(int i = 0; i <= r; i++)
            {
                temp[id] = a[i];
                id++;
            }
            swap(a,temp);
            l = 0;
            r = 0;
            delete temp;
        }
    }
    void increase_size()
    {
        RemoveChar();
        t *temp = new t[cap*2];
        for(int i = 0; i < cap*2; i++)
        {
            temp[i] = a[i];
        }
        swap(a,temp);
        cap = cap*2;
        delete temp;
    }
    void enqueue(t data)
    {
        if(sz == cap)
        {
            increase_size();
        }
        r++;
        if(r == cap)
            r=0;
        a[r] = data;
        sz++;
    }
    void dequeue()
    {
        if(sz == 0)
        {
            cout << "Queue is empty";
            return;
        }
        l++;
        if(l == cap)
            l=0;
        sz--;
    }
    t front()
    {
        if(sz == 0)
        {
            cout << "empty";
            t a;
            return a;
        }
        return a[l];
    }
    int getSize()
    {
        return sz;
    }
};
int main()
{
    FAST;
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"Queue current size is: "<<q.getSize()<<"\n";

    q.dequeue();//dequeue

    cout<<"Front element is: "<<q.front()<<"\n";
    cout<<"Queue current size is: "<<q.getSize()<<"\n";
    return 0;
}
