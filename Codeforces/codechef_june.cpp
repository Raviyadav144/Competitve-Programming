#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"




int main()
{		
	int t;
	cin >> t;
	while(t--)
	{
		int n , m, k;
		cin >> n >> m >>k;
		char grid[n+1][m+1];
		int p =0;
		for(int i=0;i<(n*m);i++)
		{
			int a ,b;
			cin >> a >> b;
			if(p%2==1)
				grid[a][b]='A';
			else
				grid[a][b] ='B';
			p++; 

		}
		bool ff = false;
		for(int i=1;i<n+1;i++)
		{	ll count =0;
			ll j=0;
			for(int j=2;j<n;j++)
			{
				if(grid[i][j]==grid[i][j-1])
				{	count++;
					if(count>=k)
					{
						for(int y=i+1;y<=(i+k);y++)
						{
							for(int x=(j-k);x<=j;x++)
							{
									if(grid[i][j]!=grid[y][x])
									{
										ff= true;
										break;
									}

							}
							break;

						}
						if(ff==false)
						{
							cout << grid[i][j];
						}
					}
				}
					
			}
			

		}

	}

}