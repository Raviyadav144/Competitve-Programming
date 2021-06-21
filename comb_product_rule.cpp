#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


// Combinatorics
int main()
{	
	string a = "ABC";
	for(int i=0;i<a.length();i++)
	{
		for(int j=0;j<a.length();j++)
		{
			for(int k=0;k<a.length();k++)
			{
				cout << a[i] << a[j] << a[k] << " ";
			}
			cout << endl;
		}
	}
}