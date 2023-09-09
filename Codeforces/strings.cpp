#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	string a , b, c;
	cin >>  a >> b  >> c ;

	string v;
	cin >> v;
	if(a ==v ){
		cout << "Correct Guess"  << endl;
	}
	else
	cout << "Wrong Guesss" << endl;

	// to get multiple words as input
	string val;
	cin.ignore(); // do it or getline() will not work
	getline(cin , val);
	cout << val <<endl;
	cout << "Hello" << endl; 

	cout << val.length() << endl;
	cout << val.size() << endl;
	cout << val.append(" Oh yeah !!") << endl;
	cout << val.insert(12 , "!!") << endl;
	cout << val.erase(12 , 2) << endl;

	val.pop_back(); //return type is void 
	cout << val << endl;

	cout << val.replace(0,4 , "I") <<endl;
	cout << val.replace(0,1,"I am") << endl;
	cout << val.find("am") << endl;
	
	cout << val.substr(0,4) << endl;


	cout << val.find_first_of("aeiou") <<endl; // looks for first varibable
	cout << val.find_first_of("xz") <<endl; //returns unsgined long 
	if(val.find_first_of("xz") == -1)
		cout << "NOT FOUND" << endl;

	

	




}
