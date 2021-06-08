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
	string a,b;
	cin >> a >> b;

	char deli = '|';
	string c = a.substr(0,a.find(deli));
	string d = a.substr(a.find(deli)+1 , a.length()-1);

	if((min(c.size(),d.size())+b.length()) < max(c.size(),d.size()))
	{
		cout << "Impossible";
		return 0;
	}
	if((a.size()+b.size()-1) %2 !=0)
	{
		cout << "Impossible";
		return 0;
	}
	else
	{ 
		forn(i,0,b.length())
		{
			if(c.size()<d.size())
				c+=b[i];
			else
				d+=b[i];
		}
		cout << c << "|" << d << endl; 
	}

}
