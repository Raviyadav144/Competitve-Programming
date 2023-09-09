#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)



//prime factorization
int main() 
{	
	int n;
	cin >> n;
	int n1 =n;
	vector <int> factors;
	for(int i =2; i*i<=n;i++)
	{
		while(n%i==0)
		{
			factors.push_back(i);
			n/=i;
		}
	}
	fora(e,factors)
	cout << e << " ";
	if(n>1)
		cout << n;
}
