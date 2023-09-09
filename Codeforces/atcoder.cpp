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
	cin >> n;
	while(n--)
	{
		int a , b;
		cin >> a >> b;
		if(a==1 && b==1)
		{	
			cout << "Yes" << endl;
			cout << "R" << endl;
			continue;
			
		}
		a+=2;
		b+=2;
		bool check[a][b] = {false};
		
		char arr[a][b];
		vector <pair<int,int>> vpair;
		for(int i=1;i<a-1;i++)
		{
			for(int j =1;j<b-1;j++)
			{
				cin >> arr[i][j];
				if(arr[i][j]!='.')
				{
					vpair.push_back({i,j});
					check[i][j] = true;
				}
			}
		}
		fora(e,vpair)
		{ if(arr[e.first][e.second]=='R')
			arr[e.first][e.second+1] = arr[e.first+1][e.second] =arr[e.first-1][e.second] = arr[e.first][e.second-1] ='W';
			else
				arr[e.first][e.second+1] = arr[e.first+1][e.second] =arr[e.first-1][e.second] = arr[e.first][e.second-1] ='R';
			check[e.first][e.second+1] = check[e.first+1][e.second] =check[e.first-1][e.second] = check[e.first][e.second-1]= true;
		}
		for(int i=1;i<a-1;i++)
		{
			for(int j =1;j<b-1;j++)
			{
				if(check[i][j]==true)
				{	char val ;
					if(arr[i][j]=='R')
						 val = 'W';
					else
						val = 'R';
					if(check[i+1][j]==false)
					{
						arr[i+1][j] = val;
						check[i+1][j] = true;
					}
					if(check[i][j+1]==false)
					{
						arr[i][j+1] = val;
						check[i][j+1] = true;
					}
					if(check[i-1][j]==false)
					{
						arr[i-1][j] = val;
						check[i-1][j] = true;
					}
					if(check[i][j-1]==false)
					{
						arr[i][j-1] = val;
						check[i][j-1] = true;
					}


				}			
			}
		}
		bool want = false;
		for(int i=2;i<a-2;i++)
		{
			for(int j =2;j<b-2;j++)
			{  
				if(arr[j][i]==arr[i+1][j] ||arr[j][i]==arr[i][j+1] ||arr[j][i]==arr[i-1][j] || arr[j][i]==arr[i][j-1])
				{
					want = true;
					
					break;
				}
			}
		}
		if(want == true)
		{cout << "No" << endl;
			continue;
		}
		cout << "Yes" << endl;

		for(int i=1;i<a-1;i++)
		{
			for(int j =1;j<b-1;j++)
			{  
				cout << arr[i][j];
			}
			cout << endl;
		}	
		

	}

}