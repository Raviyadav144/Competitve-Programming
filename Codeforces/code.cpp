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
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<pair<int,int>>v;
        for(int i = 0 ;i < n ;++i)
        {
            int a , b;
            cin >> a >> b;
            v.push_back({a,b});
        }
        sort(all(v));
       
        int ans = 0;
        ans+=v[0].first;   
        int temp = (v[0].second - 1) / 2;
        int min_val = ans+temp;
        bool flag = false;
        for(int i= 1 ; i < n ;++i)
        {
           
            if (v[i].first + (v[i].second-1)/2 < min_val)
            {
                min_val = v[i].first + (v[i].second-1)/2;
               
            }
        }
        cout << min_val << endl;



    }

}



