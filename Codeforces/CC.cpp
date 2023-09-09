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
        cin >> n;
        vector<ll>v(n);
        int first = -1;
        int last = -1 ;
        for(int i = 0 ; i< n;++i)
        {
            cin >> v[i];
            if(v[i]==0 && first == -1)
                first = i;
            if(v[i]==1)
                last = i;
        }
        vector<ll>suf(n+1 , 0);
        for(int i = n-1;i>=0;--i)
        {
            if(v[i]==0)
                suf[i] = suf[i+1]+1;
            else
                suf[i] = suf[i+1];
        }
        // fora(e,suf)
        //     cout << e << " ";
        // cout << endl;
        ll count = 0 ;
        for(int i = 0 ; i < n;++i)
        {
            if(v[i]==1)
                count+=suf[i];
        }
        // if(first== -1)
        // {
        //     cout << count << endl;
        //     continue;
        // }
        v[first] = 1;
        vector<ll>suf1(n+1 , 0);
        for(int i = n-1;i>=0;--i)
        {
            if(v[i]==0)
                suf1[i] = suf1[i+1]+1;
            else
                suf1[i] = suf1[i+1];
        }
        // fora(e,suf)
        //     cout << e << " ";
        // cout << endl;
        ll count1 = 0 ;
        for(int i = 0 ; i < n;++i)
        {
            if(v[i]==1)
                count1+=suf1[i];
        }
        v[first] = 0;
        v[last]=0;
        vector<ll>suf2(n+1 , 0);
        for(int i = n-1;i>=0;--i)
        {
            if(v[i]==0)
                suf2[i] = suf2[i+1]+1;
            else
                suf2[i] = suf2[i+1];
        }
        // fora(e,suf)
        //     cout << e << " ";
        // cout << endl;
        ll count3 = 0 ;
        for(int i = 0 ; i < n;++i)
        {
            if(v[i]==1)
                count3+=suf2[i];
        }
        cout << max(count , max(count1,count3)) << endl;

    }
}

