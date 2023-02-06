#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void print(list<int>l)
{
    //list<int>::iterator a = l.begin();
    //          or
    auto a = l.begin();

    while(a != l.end())
    {
        cout<< *a << " ";
        a++;
    }
    cout<<endl;
}

//Inserting at any index TC O(n)
void Insert(list<int>&l, int index, int value)
{
    auto it = l.begin(); //0(1)
    advance(it , index); //moving my iterator using advance function // O(index) -> O(n)
    l.insert(it , value);//O(1)
}

//delete at any index TC O(n)
 void Delete(list<int>&l , int index)
 {
     auto it = l.begin();
     advance(it , index);
     l.erase(it);
 }


int main()
{
    FAST;
    //push_front TC O(1)
    list<int>l;
    l.push_front(10);//basically push at head;
    l.push_front(20);
    l.push_front(30);

    //printing TC O(n)
    print(l);

    //push_back O(1)
    l.push_back(40);
    l.push_back(50);
    print(l);

    //pop_back O(1)
    l.pop_back();
    print(l);

    //pop_front O(1)
    l.pop_front();
    print(l);

    //insert at any position
    Insert(l, 2, 100);
    print(l);

    //delete at any position
    Delete(l, 2);
    print(l);

    //size
    cout<<l.size()<<" ";
    return 0;
}
