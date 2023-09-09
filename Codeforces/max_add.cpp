#include<bits/stdc++.h>
using namespace std;

#define forn(j,n) for(int i =j; i<n; i++)

int main()
{
	int n ;
	cin >> n;
	vector <int> v(n);
	for(auto & e: v)
		cin >> e;
	
		
	long long int m =v[0];
	long long int sum =1;
	
	for(int i =0 ; i<n ;i++)
	{
		

		sum = sum +v[i]*n;
		
		cout << sum << endl;
		
		
	}


}
