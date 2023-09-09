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
	string s;
	cin >> s;
	if(s=="0")
	{
		cout << 0 << endl;
		return 0;
	}
	int count =0;
	fora(e,s)
	if(e=='1')
		count++;

	if(count==1)
	{
		cout << ceil(((float)s.length()-1.0)/2.0);
		return 0;
	}
	else
	{
		cout <<ceil((float)s.length()/2.0);
	}
}
