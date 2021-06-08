#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif

	auto x = 5U;
	cout <<x << endl;

	//Octal and Hexadecimal

	int num = 0x30;
	cout << (int) num << endl;

	int num_oct = 030;
	cout <<  (int) num_oct << endl;
	
	cout << hex << 48 << endl ;
	cout << oct << 24 << endl ;

	//switch case 
	int input;
	cin >> input;
	switch(input){
		case 1 : cout << "Monday" << endl;
					break;
		case 2 : cout << "Tuesday" << endl;
					break;
		default : cout << "Wrong Value" << endl ;
					break;

				}

	//using switch with enum
	enum  season { summer , spring , winter , autumn};
	season now = summer;
	switch(now){
		case winter : cout << "Stay Warm" << endl;
						break;
		case summer : cout << "Stay Cool " << endl;
						break;
		default : cout << "We Cool" << endl;
					break;
	}

	//range based for loop
	/*string  seasons[] =  { "summer" , "spring" , "winter" , "autumn"};
	for ( string a : seasons)
		{
			cout << a << endl;
		}*/


	//random num generator
	
		int random = rand() % 251;
		srand(time(NULL));
		cout << random << endl;
			
		// only givin same sequence
	
	


}

