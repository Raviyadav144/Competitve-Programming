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

bool prime[10000001];
int main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    memset(prime, true, sizeof(prime));
    prime[1] = true;
    prime[2] = true;
    for(int i = 2 ; i*i < 10000001 ;++i)
    {
        if(prime[i])
        {
            for(int j = 2*i ; j < 10000001; j+=i)
                prime[j] = false;
        }
    }
    while(t--)
    {
        unsigned ll n;
        cin >> n;
        if(n==1 || n==2)
        {
            cout << "NO" << endl;
            continue;
        }
        unsigned ll val = sqrt(n);
        // cout << val << endl;
        // cout << val*val << endl;
        if(val*val == n)
        {
            // cout << "YEAH" << endl;
            if(prime[val])
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}


