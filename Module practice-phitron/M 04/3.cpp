#include<bits/stdc++.h>
using namespace std;

/*
1.
TC = O(2^n)
MC = O(n)

after using save
tc=O(n)
mc=O(n)
*/

int called=0;
int save[100];

int fib(int n)
{
    if(n==0)//base case
        return 0;
    if(n==1)//base case
        return 1;

    if (save[n]!=0)
        return save[n];

    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    save[n]=x+y;

    return x+y;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cout<<fib(n)<<"\n"<<"called: "<<called;



    return 0;
}

/*



*/
