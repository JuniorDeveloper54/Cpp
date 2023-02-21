#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,s,r;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        cin >> p >> s >> r;
        if((p == s) && r>1)
            cout << "Case " << i << ": "<< "No" << endl;
        else
            cout << "Case " << i << ": "<< "Yes" << endl;
    }

    return 0;
}
