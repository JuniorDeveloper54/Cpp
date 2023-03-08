#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int *y = &x;

    cout<<x<<endl;// x er man
    cout<<y<<endl;// y kon memory te ace
    cout<<*y<<endl;// y memory te kon value ace

    return 0;
}
