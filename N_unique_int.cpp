#include<bits/stdc++.h>

using namespace std;

int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	map<string, int> m;
	int n;
	cin >> n;

	for(int i =0 ; i < n ; i++)
	{
		string st ;
		cin >> st;
		m[st] ++ ;


	}
	for(auto &it : m)
	{
		cout << it.first << " " << it.second << endl;

	}
}