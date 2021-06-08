#include<bits/stdc++.h>
using namespace std;

int main()
{	unordered_map <string  ,int> m;
	int n ;
	cin >> n;
	for(int i = 0; i<n ; i++)
	{
		int a;
		cin >>a;
		if(a ==1)
		{
			string s;
			int y;
			cin >> s >> y;
			m[s]+=y;
		}

		if(a==2)
		{
			string s;
			cin >> s;
			m[s]=0;
		}
		if(a==3)
		{
			string s;
			cin >>s;
			cout << m[s] << endl;
		}

	}

}