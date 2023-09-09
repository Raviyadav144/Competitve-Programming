#include <bits/stdc++.h>

using namespace std;

#define forn(i,n) for (int i = 0 ; i < int(n) ; i++)

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif
	int a;
	cin >> a;
	forn(i,a)
	{
		cout << i <<endl;
	}
	vector <int> vec;
	int n;
	cin >> n;
	for(int &e : vec){
		cin >> e ;
	}
	forn(i,n)
	{
		cout << i << endl;
	}
	
}

