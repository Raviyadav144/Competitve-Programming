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
	while(true)
	{
		ll a , b , c;
		cin >> a >> b >> c;
		if(a==0 && b==0 && c==0)
			return 0;
		
		ll pro = ((a-7)*(b-7)+c)/2 ;
		
		cout << pro << endl;

	}		
}