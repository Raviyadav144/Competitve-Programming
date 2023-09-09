#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a , pair<int , int>&b)
{
	if(a.first != b.first)
		return a.first < b.first;
	return a.second > b.second;


}


int main()
{
	

	int n ;
	cin >>n;
	vector <pair<int,int>> v;
	for(int i =0; i<(3) ; i++)
	{	
		int e,f;
		cin >> e >>f;
		v.push_back({e,f}) ;
		
	}

	sort(v.begin() , v.end(), cmp);


	for(auto a: v)
	{
		cout << a.first <<" " << a.second<< endl;
	}
	cout << v.size();

}
