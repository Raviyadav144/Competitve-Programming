#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string



int main() 
{	
	int n;
	cin >> n;
	while(n--)
{
	int b,c;
	cin >> b >> c;
	str a;
	cin >> a;
	vector <ll> ind;
	vector <int> v(b+2) ;
	
	int bc = 1;
	for(auto &e : a)
	{
		v[bc] = e-'0';
		if(v[bc] ==0);
		ind.push_back(bc);

		bc++;
	}
	sort(all(ind));
	
	forn(i,0,b)
	{vector <int> v1(b+2);
		for(auto &j :ind)
		{
			
			
				
					if((v[j-1] == 1 && v[j+1]!=1) || (v[j-1] != 1 && v[j+1]==1))
					{
						v1[j] =1;
					}
					else
						v1[j] = v[j];
					v = v1;
		}		
		
	}	



	

	forn(i,1,v.size()-1)
		cout << v[i];
	cout << endl;
}

}
