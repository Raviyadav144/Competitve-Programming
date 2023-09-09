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
	int n;
	cin >> n;
	vector <int> v(n);
	int neg=0;
	int pos =0;

	fora(e,v)
	cin >> e;
	bool val = false;
	forn(i,0,n)
	{
		if(v[i]&1 && val==false)
		{
			cout << ceil((float)v[i]/2.0) << endl;
			val = true;
		}
		else if(v[i]&1 && val==true)
		{
			cout << floor((float)v[i]/2.0) << endl;
			val = false;
		}
		else
		{
			cout << v[i]/2 << endl;
		}
	}
		
	
}
