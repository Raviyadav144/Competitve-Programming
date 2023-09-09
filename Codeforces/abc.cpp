#include<bits/stdc++.h>
using namespace std;

int check(vector <long long int> v , int val , long long int b)
{
	int max = 0;
	
	for(int i =0; i <v.size(); i++)
	{
		if (((v[i] + val) % b) > max)
			max = (v[i] + val) % b;
		
	}
	return max;
}

int main()
{
	long long int  a, b;
	cin >> a >> b;
	vector <long long int> v(a);
	for(long long int &e : v)
		cin >> e;
	int c;
	cin >> c;
	while(c--)
	{
		int val;
		cin >> val;
		cout << check(v , val , b) << endl;

	}
}

