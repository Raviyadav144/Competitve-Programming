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
	int n,k;
	cin >> n >> k;
	int count = 0;
	forn(i,0,n)
	{
		string a;
		cin >> a;
		if(a.length()<=k && k!=0)
			continue;
		vector <int> v(10);
		fora(e,a)
		v[e-'0'] =1;

		bool val = false;
		forn(i,0,k+1)
		{
			if(v[i]!=1)
			{	
				val = true;
				break;
			}
		}
		if(val==false)
			count ++;
	}
	cout << count << endl;
}
