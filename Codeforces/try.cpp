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



int main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin  >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        // cout << "TES";
        if(!(a&1) && a/2 !=1)
        {
            cout << (a/2) << " " << a/2 << endl;
            continue;
        }
        if(!(b&1) && b/2 !=1)
        {
             cout << (b/2) << " " << b/2 << endl;
            continue;
        }
        else
        {
            if(a==b)
            {
                for(int i =2 ; i < 10 ; ++i)
                {
                    if(a % i == 0)
                    {
                        cout << a << " " << a-i << endl;
                        break;
                    }
                }
                continue;
            }
            if((a+1) / 2 == 1)
            {
                cout << -1 << endl;
                continue;
            }
            cout << (a+1)/2 << " " << (a+1)/2 <<   endl;
        }
    }
}