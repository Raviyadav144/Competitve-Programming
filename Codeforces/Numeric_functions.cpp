#include<iostream>
#include<string>
#include<vector>
#include<float.h>
#include<cmath>
using namespace std;



int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" ,"w" , stdout);
	#endif

	cout <<sqrt(26) << endl;
	cout << NAN << endl;
	cout << INFINITY << endl;
	cout << remainder (10,3)<< endl ;
	cout << remainder(10.5,3.0) << endl;
	cout << fmod(10.5 , 3.0) << endl;

	//int arr[] ={ 1,2 ,3};
	cout << fmax(1,2) << endl;
	cout << fmin(1,2) << endl;
	cout << ceil(fmin(1.5 , 3.5)) << endl;
	cout << floor(fmax(1.5 , 3.5)) << endl;

	cout << trunc(10.56) << endl;
	cout << round(10.56) << endl;


}