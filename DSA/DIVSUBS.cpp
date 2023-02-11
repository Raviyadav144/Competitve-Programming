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
        int n;
        cin >> n;
        vector<ll>v(n);
        fora(e,v)
        cin >> e;
        vector<ll>pre(n);
        pre[0] = v[0];
        for(int i =1 ; i < n;++i )
        {
            pre[i] = pre[i-1]+v[i];
        }
        //  fora(e, pre)
        // cout <<e << " ";
        // cout << endl;
        bool flag = false;
       
        map<ll,vector<ll>>m;
        for(int i =0 ; i < n;++i)
        {
            pre[i]%=n;
     
            m[pre[i]].push_back(i+1);
        }
        
        if(m[0].size() > 0)
        {
            // cout << "YES" << endl;
            cout << m[0][0] << endl;
            for(int i = 1 ; i <= m[0][0];++i)
            {
                cout << i << " ";
            }
            flag = true;
            cout << endl;
        }
        else
        {
           fora(e, m )
            {   
                if(e.second.size() > 1)
                {
                    
                    cout << e.second[1] - e.second[0]  << endl;
                    for(int j = e.second[0]+1 ; j <= e.second[1];++j)
                        cout << j <<  " ";
                    cout << endl;
                    flag = true;
                    break;
                }

            }
        }
        if(!flag)
            cout << - 1 << endl;
    }
}
