#include<iostream>
#include<string>
#include<vector>
#include<float.h>
#include<cmath>
using namespace std;

#define b 10
int main(){

	#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

	float a;
	a = 7.7E4;
	cout << a << endl;
	cout << LDBL_DIG << endl;

	//Checking infinity and nan
	double val = INFINITY ;
	long double val1 = NAN;
	cout << val << endl << val1 << endl;
	//restricting exponential values
	cout << fixed <<a << endl ;

	// Using constants (const , macro , enum)
	const int x = 5;
	cout << x << endl;
	/*cin >> x;
	cout << x << endl;*/

	// Using enum
	enum { y = 50};
	//y = 80;
	cout << y << endl;

	//b = 45;
	cout << b;
	// b has macro defined above the main function


}