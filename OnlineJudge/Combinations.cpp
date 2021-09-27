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

ll nCr(int n , int k)
{
    double result = 1;
    for(int i = 1;i<=k;++i)
    {
        result = result * (n-k+i) /i;
    
    }
    return (ll)(result+0.1);
}

int main()
{
    int n,m;
    while(true)
    {
        cin >> n >> m;
        if(n==0 && m==0)
            return 0;
        ll ans = nCr(n,m);
        cout << n << " things taken "<< m<< " at a time is " <<ans << " exactly." << endl;
    }

}