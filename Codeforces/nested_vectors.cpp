#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<vector<int>> &vec)
{
	for(int i = 0 ; i < vec.size() ; i++)
	{
		for(int j = 0; j < vec[i].size() ; j++)
		{
			cout << vec[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	int n;
	cin >> n;
	vector<vector<int>> vec ;

	for(int i = 0 ; i<n; i++)
	{
		vector<int> temp;
		int a ;
		cin >>a ;

		for(int j = 0 ; j<a ; j++)
		{
			int b;
			cin >> b;
			temp.push_back(b);
		}
		
		vec.push_back(temp);

	}

	 print_vector(vec);
}