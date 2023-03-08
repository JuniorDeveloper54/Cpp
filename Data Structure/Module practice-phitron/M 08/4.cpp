#include<bits/stdc++.h>
using namespace std;
//merge sort


vector<int> merge_sort(vector<int>a)
{
    //base case
    if(a.size()<=1)//size jdi 1 or 0 hoi
        return a;//jei array input nilam sei array ie output hoie jabe
    int mid = a.size()/2;// mid borabor 2  ta vage vag korbo
    vector<int>b; // main vector ke 2 ta sub vector b,c te vag korbo
    vector<int>c;

    for(int i=0; i<mid; i++) //suru theke mid obdi b vector e dilam
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++) //mid theke last obdi c vector e dilam
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b = merge_sort(b); //recursively called here
    vector<int>sorted_c = merge_sort(c); //recursively called here

    //merge area
    vector<int>sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(idx1 == sorted_b.size())// watch 8-4 module 10 min
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }

        else if(idx2 == sorted_c.size())// watch 8-4 module 10 min
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }


        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>a = {3241654,1,2,3,6874496,4674,657446};
    vector<int>ans = merge_sort(a);
    for(int i=0;i<ans .size();i++)
    {
        cout<<ans[i]<<" ";
    }


    return 0;
}
