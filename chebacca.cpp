#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)




int main() 
{	
	string a;
	cin >>a;
	forn(i,0,a.length())
	{	if(i==0 && a[i]-'0'==9)
		cout << 9;
		else if(a[i]-'0'>=5)
			cout << 9-(a[i]-'0');
		else
			cout << a[i]-'0';
	}
}
