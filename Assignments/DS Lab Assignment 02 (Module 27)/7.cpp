#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void DeleteValue(list<int>&l , int value)
{
    auto it = find(l.begin() , l.end() , value);
    l.erase(it);
}

void printing(list<int> l)
{
    auto a = l.begin();
    while(a != l.end())
    {
        cout << *a << ", ";
        a++;
    }
}

int main()
{
    FAST;
    list<int> l;
    cout<<"please enter number of elements : ";
    int tt;
    cin>>tt;
    cout<<"Enter those elements : ";
    for(int i=1; i<=tt; i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<"Which element do you want to remove : ";
    int n;
    cin>>n;
    cout<<endl;

    cout<<"Your Entered Elements are : ";
    printing(l);
    cout<<"\n";
    cout<<"\n";

    DeleteValue(l,n);

    cout<<"Final list : ";
    printing(l);
    cout<<"\n";
    return 0;
}
