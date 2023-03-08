#include<bits/stdc++.h>
using namespace std;
int main()
{
//    string s="I am eating rice ";
//    string s2="I am also eating dall";
//    string s3=s+s2;

//    for(int i=0;i<s.size();i++)
//    {
//        s[i]+=1;
//    }
////    for(int i=0;i<s.size();i++)
////    {
////        cout<<s[i]<<endl;
////    }
//    cout<< s <<endl;


//    string s="abcde";
//    //s.pop_back();//delete last char
//    s.erase(s.begin()+1);//delete first char
//    cout<< s;


    string s;
    getline(cin,s);

    s.erase(s.begin());
    s.pop_back();

    cout<< s << endl;

    return 0;
}
