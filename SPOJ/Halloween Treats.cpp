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
    ll c , n;
    while(cin >> c >> n)
    {
        if(c== 0 && n == 0 )
            return 0;
        
        vector<ll>v(n);
        for(int i = 0; i < n ;++i)
            cin >> v[i];        
        bool done = false;
        vector<ll>pre(n);
        unordered_map<ll, vector<ll>>m; 
        pre[0] = v[0];
        for(int i = 1 ; i < n;++i)
        {
            pre[i] =pre[i-1] + v[i];
            
        }
        bool flag= false;
        for(int i = 0 ; i < n;++i)
        {
            pre[i]%=c;
            m[pre[i]].push_back(i+1);
        }
        if(m[0].size() > 0)
        {

            for(int i = 1 ; i <= m[0][0];++i)
                cout << i << " ";
            cout << endl;
            flag = true;
        }
        else
        fora(e , m)
        {
            sort(all(e.second));
            if(e.second.size() > 1)
            {
                flag = true;
                // cout << e.second.size();
                for(int i = e.second[0]+1 ; i <= e.second[1] ;++i )
                    cout << i <<  " ";
                cout << endl;
                break;
            }
           
        }
        if(!flag)
        {
            cout << "no sweet" << endl;
        }
            
        
    }


}
