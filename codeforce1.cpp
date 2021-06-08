#include <bits/stdc++.h>

using namespace std;

/*int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	int n;
	cin >> n;
	for(int i=0 ; i<n ; i++){
		int b , c;
		cin >> b >> c;
		if(c ==1){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
			cout << b <<' ' << b* (long long)c << ' ' << b* (long long)(c+1) << endl;
		
			}
	}

}*/
/*#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int a, b; cin >> a >> b;
        if (b == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
        }
    }
}*/

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif
	int n ;
	cin >> n;

	for(int j = 0; j<n; j++)
	{
		
		int a;
		cin >> a;
		vector<int> arr(a);
		
		for(int &k : arr )
		{
			
			cin >> k;
			
		}

		int val =0;
		vector <int> arr1 = arr;
		sort(arr.begin() , arr.end());
		

		
		val = arr[1];

		for(int i = 0 ; i<a ; i++)
		{
			if(arr1[i] != val)
			{
				cout << i+1 <<endl;
				break;
			}

		}
			

			
			
		

	}
}	

