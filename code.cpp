#include<iostream>
#include<cmath>

int pow(int , int );
int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif
	int a ,b;

	std:: cout << "Get Value: " <<std::endl;
	std::cin >> a >>b;


	std:: cout << "Hello World !" <<std::endl<< a <<std::endl << pow(a,b);
	return 0;

}
int pow(int a , int b){
	return (a * b);
}
