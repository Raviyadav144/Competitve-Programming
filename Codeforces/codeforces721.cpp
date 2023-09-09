#include<bits/stdc++.h>
using namespace std;

int check(vector <int> &v)
{	
	int count =0;
	for(int i= 0; i< v.size() ; i++)
	{
		for(int j =i+1 ; j < v.size() ; j++)
		{
			if(v[i] == v[j] )
			{
				count++;
			}
		}
	}

	return count;
}


int main()
{
	int n;
	cin >>n;
	while(n--)
	{
		int a;
		cin >> a;
		vector<int> v(a);
		for(int &e :v)
			cin >>e;
		
		cout << 2*check(v) << endl;
		
	}
}