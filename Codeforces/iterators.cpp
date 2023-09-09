#include<bits/stdc++.h>
using namespace std;

int main()
{	
	vector <int> vec = {1,2,3,4};
	//vector <int> :: iterator it;
	//for(it = vec.begin(); it!=vec.end(); it++)
	for(auto it = vec.begin() ; it != vec.end() ; it++)
	{
		cout << *it << "\t" ; 

	}
	vector <pair<int,int>> vec1 = {{1,2},{2,3},{3,4}};
	for(auto value: vec1)
	{
		cout << value.first<< " " << value.second << endl;
	}
	
	// Iterators and pair
	vector <pair<int,int>> vec= {{1,2},{2,3},{3,4}};
	for(auto &it : vec)
	{
		cout << (it).first << " " << (it).second  << endl;

 	}


}





