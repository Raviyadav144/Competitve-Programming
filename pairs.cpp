#include<bits/stdc++.h>

using namespace std;

int main()
{
	pair<int , string> p;
	p = {1,"Ravi"};
	cout << p.second << endl;

	vector <pair<int, string>> vec;
	vec.push_back({2,"Yadav"});
	vec.push_back({3,"Singh"});

	cout << vec[0].first << " " << vec[0].second << endl;
	cout << vec[1].first << " " << vec[1].second << endl;

	swap(vec[0].first , vec[1].first);
	cout << vec[0].first << " " << vec[0].second << endl;
	cout << vec[1].first << " " << vec[1].second << endl;



}
