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
	int p ,n;
	cin >> p >> n;
	vector<bool>v(p,false);
	for(int i=0;i<n;i++)
	{
		int a;
		cin >>a;
		if(v[(a%p)]==true)
		{
			cout << i+1 << endl;
			return 0;
		}
		v[a%p]=true;

	}
	cout << -1 << endl;
}
