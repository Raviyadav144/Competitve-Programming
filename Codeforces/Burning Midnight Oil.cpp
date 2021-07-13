#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)

ll n , k;

ll possible(ll v)
{
    ll sum = 0;
    int i =0;
    while(true)
    {
        int val = floor(v/pow(k,i));
        if(val == 0)
            break;
        sum+=(val);
        i++;

    }
    return sum>=n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;

    ll hi = 1e9 , lo = 0;
    while(hi-lo>1)
    {
        ll mid= lo+(hi-lo)/2;
       
        if(possible(mid))
            hi = mid;
        else
            lo = mid+1;
    }
    if(possible(lo))
        cout << lo << endl;
    else
        cout << hi << endl;
    
}

