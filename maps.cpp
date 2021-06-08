#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	unordered_map<int ,string> m ;
	for (int i = 3; i > 0 ; i--)
	{
		string s;
		cin >> s;
		m.insert({i, s});


	}
	m[4] = "Ravi";
	m.erase(1);
	for(auto &val : m)
	{
		cout << val.first << " " << val.second << endl; ;

	}
	auto it = m.find(1);
	cout << (*it).first  << endl;
}