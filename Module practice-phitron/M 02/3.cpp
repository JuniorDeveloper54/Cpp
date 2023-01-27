#include<bits/stdc++.h>
using namespace std;

//int sum(int a,int b,int c)
//{
//    int s=(a+b+c)/3;
//    return s;
//}

int main()
{
    int a,b;
    cin >> a >> b;

    cout<< "a=" << a << " " << "b=" << b << endl;
    int temp = a;
    a = b;
    b = temp;

    cout<< "a=" << a << " " << "b=" << b << endl;
    return 0;
}
