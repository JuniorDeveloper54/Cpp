#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int first=1;
        int difference=1;

        for(int i=1; i<=k; i++)
        {
            cout<<first<<" ";

            if(n-(first+difference )>=(k-i-1))
            {
                first+=difference ;
                difference ++;
            }
            else
                first++;
        }

        cout<<"\n";
    }
    return 0;
}
