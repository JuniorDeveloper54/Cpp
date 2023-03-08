#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10];
    int sum=0;
    for(int i=0; i<10; i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    cout << sum << endl;
    return 0;
}
