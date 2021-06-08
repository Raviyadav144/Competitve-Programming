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
	string a = "AB|CD";
	char deli = '|';
	string c = a.substr(0,a.find(deli));
	string d = a.substr(a.find(deli)+1 , a.length()-1);
	cout << c << " " << d;
	
}