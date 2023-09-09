#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<vector>


using namespace std;

void print_array(int arr[] , int size){
	for(int i = size-1 ; i>=0 ; i--)
		cout << arr[i] <<endl;
	arr[5] = 6;

}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	int arr[6] = {1,2,3,4,5};
	
	print_array(arr , 5);
	for(int i = 0; i<sizeof(arr)/sizeof(int) ; i++){
		cout << arr[i] << endl;
		}
	
}
	