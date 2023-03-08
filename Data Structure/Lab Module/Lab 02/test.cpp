#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int A=0;
        if(s[0]=='Y' || s[0]=='y')
        {
            A++;
        }
        if(s[1]=='e' || s[1]=='E')
        {
            A++;
        }
        if(s[2]=='s' || s[2]=='S')
        {
            A++;
        }
        if(A==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}




