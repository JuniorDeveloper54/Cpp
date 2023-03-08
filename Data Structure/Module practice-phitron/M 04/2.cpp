#include<bits/stdc++.h>
using namespace std;
/*
1.
TC = O(1)
MC = O(1)

2.
TC = O(n)
MC = O(n)

3.
TC = O(n^2)
MC = O(n)

*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    int a,b,c;
//    cin>>a>>b>>c;
//    int maxi= max({a,b,c});
//    int mini = min({a,b,c});
//    int sum = a+b+c;
//    int mul = a*b*c;
//
//    cout<<maxi<<"\n";
//    cout<<mini<<"\n";
//    cout<<sum<<"\n";
//    cout<<mul<<"\n";
//2.
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
//    int maxi = a[0];
//    int mini = a[0];
//    int sum = 0;
//
//    for(int i=0;i<n;i++)
//    {
//        maxi=max(maxi,a[i]);
//        maxi=min(maxi,a[i]);
//        sum+=a[i];
//    }
//    cout<<maxi<<"\n";
//    cout<<mini<<"\n";
//    cout<<sum<<"\n";
//3.
    for(int i=0;i<n;i++)//eita order 1
    {
        string ans="NO\n";
        for(int j=i+1;j<n;j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
            {
                ans="YES\n";
            }
        }
        cout<<"i = "<<i<<" "<<ans;

    }

    return 0;
}
