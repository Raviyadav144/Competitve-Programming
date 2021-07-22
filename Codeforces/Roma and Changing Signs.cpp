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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    int sum =0;
    vector<int>v(n);
    fora(e,v)
    {
        cin >> e;
        sum+=e;
    }
    if(n==1)
    {
        if(k&1)
            cout << -1*v[0];
        else
            cout << v[0] << endl;
        return 0;
    }
    int i;
    for(i=0;i<n;++i)
    {
        if(k==0)
            break;
        if(v[i]<0)
        {
            k-=1;
            sum+=(2*abs(v[i]));
        }
        
        else
        {
            int a = min(v[i],abs(v[i-1]));
            if(k&1)
                sum-=(2*a);

            break;
        }
    }
    
    cout << sum << endl;
}

