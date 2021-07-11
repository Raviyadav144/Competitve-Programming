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
    int t;
    cin >> t;
    while(t--)
    {
        int k, n, m ;
        cin >> k >> n >> m;
        vector<int> a(n);
        vector<int>b(m);
        fora(e,a)
        cin >> e;
        fora(e,b)
        cin >> e;
        int it1 =0;
        int it2 =0;
        bool check = true;
        vector<int> v;
        while(it1!=n || it2!=m)
        {   
           if(a[it1]==0 && it1!=n)
           {
                v.push_back(0);
                it1++;
                k++;
           }
            else if(b[it2]==0 && it2!=m)
            {   v.push_back(0);
                it2++;
                k++;
            }
            else if(a[it1]<=k && it1!=n)
            {
                v.push_back(a[it1++]);
              
                
            }
            else if(b[it2]<=k && it2 !=m)
            {
                v.push_back(b[it2++]);
               
                
            }
            else
            {
                cout << -1 << endl;
                check = false;
                break;
            }
        }
        if(check)
        {
            fora(e,v)
            cout << e << " ";
            cout << endl;
        }

    }
}

