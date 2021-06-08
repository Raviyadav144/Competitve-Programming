#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string

int main() 
{	
	set <char> s;
	while(1)
	{
		char x;
		cin >> x;
		if(x== '{' or x== ',')
			continue;
		if(x=='}')
			break;
		else
		{
			s.insert(x);
		}
		
	}
cout << s.size();


}