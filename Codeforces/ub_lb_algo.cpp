#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> v(n);
	for(int &e : v)
		cin >>e;

	
	sort(v.begin() , v.end());
	auto ptr = lower_bound(v.begin(), v.end() , 3.5);
	cout << *ptr << endl;

	auto ptr1 = upper_bound(v.begin() , v.end() , 3);
	cout << *ptr1 << endl;

	set <int> s = {1,2,3,45,78,90};
	auto us = s.lower_bound(46);
	cout << *us << endl;

	auto us1 = s.upper_bound(45);
	cout << *us1<< endl;

	int min = *min_element(v.begin(),v.end());
	cout << "Min val is " << min << endl;

	int max = *max_element(v.begin() , v.end());
	cout << "Max val is " << max << endl;

	int sum = accumulate(v.begin() , v.end(),0);
	cout << "Sum is " << sum << endl;
	cout << accumulate(v.begin() , v.end(),0) << endl;

	auto p = find(v.begin() , v.end()  ,3);
	cout << *p << endl;

	reverse(v.begin() , v.end());
	for(int a:v)
		cout << a << "\t";
	cout << endl;

	cout << all_of(v.begin() , v.end() , [](int x){return x%2 == 0;}) << endl;

	cout << any_of(v.begin() , v.end() , [](int y){return y%2 == 0;}) << endl;

	cout << none_of(v.begin() , v.end() , [](int x){return x%2 == 0;}) << endl;


}