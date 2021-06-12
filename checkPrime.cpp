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
	cin >>n;
	int count=0;
	for(int i=1;i*i<=n;i++)
	{
		if(!(n%i))
		{	count++;
			int otherDivisor = n/i; //if i divides n then n/i divides n too
			if(otherDivisor!=i)
				count++;
		}
	}
	cout << count;
	if(count==2) //to check prime
	{
		cout << "Prime" << endl;
	}
	else
	{
		cout << "Composite" << endl;
	}
}
