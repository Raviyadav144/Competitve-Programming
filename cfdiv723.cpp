#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string

int main()
{	string a ="11";
	vector <int> v(11);
	forn(i,2,11)
	{	v[i] =stoi(a);
		a+='1';

	}
	int  n;
	cin >> n;
	while(n--)
	{
		ll b;
		cin >>b;
		while(b>=11)
		{	int len;
			len = to_string(b).length();
			if(v[len] > b)
				b-=v[len-1];
			else
				b-=v[len];
		}
		if(b ==0)
		cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
