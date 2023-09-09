#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

int main()
{	int t;
	cin >> t;
	while(t--)
	{	
	 int m,n;
	 cin >> m >> n;
	 int row , col;
	 cin >> row >> col;
	 int frow , fcol,frow1,fcol1;
	 if(row<=(m/2))
	 {
	 	frow = m;
	 	frow1=1;
	 }
	 else
	 {
	 	frow = 1;
	 	frow1=m;
	 }	
	 if(col <=(n/2))
	 {
	 	fcol =n;
	 	fcol1=1;
	 }
	 else
	 {
	 	fcol=1;
	 	fcol1=n;
	 }	
	 
	cout << frow << " " << fcol << " " << frow1 << " " << fcol1 << endl;
}
}
