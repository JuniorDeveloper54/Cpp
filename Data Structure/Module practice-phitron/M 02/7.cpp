#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={1,654,321,65,161,635};
    sort(a.begin()+1, a.begin()+3);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    return 0;
}

