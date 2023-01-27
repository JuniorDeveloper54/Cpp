#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //sorting here
    sort(a.begin(),a.end());

    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        int low=0;
        int high=n-1;
        int flag=0;

        while(low<=high)
        {
            int mid = (low+high)/2;
            if(a[mid]==k)
            {
                cout<<"YES "<<mid<<"\n";
                flag=1;
                break;
            }
            if(a[mid]>k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}

/*

10 20
15 1 2 3 4 5 6 10 11 13


n
not sorted
q
k
yes or no and index

10
15 1 2 3 4 5 6 10 11 13
2
3 18

*/
