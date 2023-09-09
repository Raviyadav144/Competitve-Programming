#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


// Combinatorics
// Sum Rule
int main()
{	
	string a = "ABC";
	int count_bb=0;
	int count_b=0;
	for(int i=0;i<a.length();i++)
	{
		for(int j=0;j<a.length();j++)
		{	if(j==1)
			
			for(int k=0;k<a.length();k++)
			{	count_b++;
				if(k==1 &&j==1)
					count_bb++;
			}
			
		}
	}
	cout << count_b - count_bb << endl;
}