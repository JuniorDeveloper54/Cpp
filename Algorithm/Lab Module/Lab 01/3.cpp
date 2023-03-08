//Topic---> Adjacency List
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



	FAST;
	int nodes = 4;
	//std::vector<int> adj_list[nodes];

	// //here tc = O(n^2)
	// //unweighted and undirected
	// adj_list[0] = {1};
	// adj_list[1] = {0, 2, 3};
	// adj_list[2] = {1, 3};
	// adj_list[3] = {1, 2};


	std::vector<pair<int, int>> adj_list[nodes];
	// first_approch - using pair & vector
	// adj_list[0].push_back({1, 2});
	// adj_list[1].push_back({2, 2});
	// adj_list[3].push_back({2, 8});
	// adj_list[3].push_back({1, 7});

	//second approch - using list
	adj_list[0] = { {1, 2} };
	adj_list[1] = { {2, 2} };
	adj_list[2] = {};
	adj_list[3] = { {2, 8}, {1, 7} };


	for (int i = 0; i < nodes; i++)
	{
		cout << i << " -> ";
		for (int j = 0; j < adj_list[i].size(); j++)
		{
			cout << "(" << adj_list[i][j].first << "," << adj_list[i][j].second << ")";
		}
		cout << nline;
	}


	return 0;
}

/*
TC = O(n^2)
SC = O(n^2)

*/