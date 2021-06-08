#include<bits/stdc++.h>
using namespace std;

int min_keys(vector <char> &v)
{
	int count= 0;
	unordered_map <char , int> m;
	
	for(auto x: v)
	{
		if(islower(x))
			m[x]++;
		else if(m[tolower(x)] > 0)
			m[tolower(x)]--;
			else
				count ++;
	}
	
	
	return count ;
	
}
int main()
{
	int n;
	cin >>n;
	vector <char> v(2*n - 2);
	for(char &c : v)
	{
		cin >> c;
	}
	

	 cout << min_keys(v);
}