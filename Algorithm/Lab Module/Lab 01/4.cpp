//Topic---> Edge List
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nline "\n"
#define ll long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

	// For getting input from input.txt file
	freopen("Input.txt", "r", stdin);

	// Printing the Output to output.txt file
	freopen("Output.txt", "w", stdout);

#endif

	/*
	[0,1]
	[1,2]
	[1,3]
	[2,3]

	*/

	FAST;
	int nodes = 4;

	// 1. using intialization
	vector<vector<int>>edge_list = {
		{0, 1},
		{1, 2},
		{1, 3},
		{2, 3},
	};

	// 2. using push_back
	// edge_list.push_back({0, 1});
	// edge_list.push_back({1, 2});
	// edge_list.push_back({1, 3});
	// edge_list.push_back({2, 3});



	for (int i = 0; i < edge_list.size(); i++)
	{
		cout << edge_list[i][0] << " " << edge_list[i][1] << nline;
	}


	return 0;
}

/*
TC = O(n) --> wrost case O(n^2)
SC = O(n) --> wrost case O(n^2)

*/