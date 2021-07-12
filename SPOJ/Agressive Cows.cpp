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

ll N = 1e6;
ll n ,m;
ll cows;
vector<ll> stall(N);
bool canPut(ll c)
{
    int pos =-1;
    int count = 0;
    for(int i=0;i<n;++i)
    {
        if(stall[i]-stall[pos]>=c || pos == -1)
        {
            count++;
            pos =i;
        }
        if(count==m)
            break;
    }
    return count == m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;++i)
        cin >> stall[i];
    sort(stall.begin(),stall.begin()+n);
    ll hi = 1e9 , lo =0;
    while(hi-lo>1)
    {
        ll mid = lo+(hi-lo)/2;
        if(canPut(mid))
            lo = mid;
        else
            hi = mid-1;

    }
    if(canPut(hi))
        cout << hi << endl;
    else
        cout << lo << endl;
    
}

