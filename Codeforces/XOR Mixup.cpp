//-----raviyadav144----//
#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)
#define mod 1000000007


int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int>v(n);
        for(int i = 0 ; i< n;++i )
        {
            cin >> v[i];
        }
        int ans = v[0];
        for(int i = 1 ; i < n;++i)
        {
            ans ^=v[i];
        }
        for(int i = 0 ; i < n;++i)
        {
            int check = ans ^ v[i];
            if(check == v[i])
            {
                cout << v[i] << endl;
                break;
            }
        }
    }
    
}

