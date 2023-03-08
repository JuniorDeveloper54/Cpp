#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    FAST;

    //ALL FUNCTION WORKS HERE WITH O(1);
    //Stack
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.size() << endl;

    //top
    cout << st.top() << "\n";

    //pop
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();

    cout << st.size();
    return 0;
}
