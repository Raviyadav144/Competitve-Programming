#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)


// Combinatorics
int main()
{	int n =100;
	ll count =0;
	for(int i2=0;i2<2;i2++)
	{
		for(int i3=0;i3<2;i3++)
		{
			for(int i5=0;i5<2;i5++)
			{
				for(int i7=0;i7<2;i7++)
				{
					int eleCount =0;
					int d=1;
					if(i2)
					{
						d*=2;
						eleCount++;
					}
					if(i3)
					{
						d*=3;
						eleCount++;
					}
					if(i5)
					{
						d*=5;
						eleCount++;
					}
					if(i7)
					{
						d*=7;
						eleCount++;
					}
					if(eleCount==0)
						continue;

					int sign = eleCount%2==1 ? 1 : -1;
					count += sign*n/d;
				}
			}
		}
	}
	cout << count << endl;
}