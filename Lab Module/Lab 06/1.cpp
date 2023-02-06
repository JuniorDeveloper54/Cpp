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



    return 0;
}
