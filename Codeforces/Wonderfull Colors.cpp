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
        map<int,pair<int,bool>>m;
        int n,k;
        cin >> n >> k;
        

        vector<int>v(n);
        for(int i =0;i<n;i++)
        {   cin >> v[i];

             m[v[i]].first++;
             if(m[v[i]].first>=k)
             {
                m[v[i]].first = k;
                m[v[i]].second = true;
            }
            else
                m[v[i]].second = false;

        }
        if(n<k)
        {
            for(int i =0;i<n-1;i++)
                cout << 0 << " ";
            cout <<0 <<endl;
            continue;
        }
        int sum = 0;
        fora(e,m)
        {
            if(!e.second.second)
                sum+=(e.second.first);
        }

        vector<int> color(n,0);
        if(sum>=k)
        {
            int div = sum/k;
            sum=(k*div);
            int count = 1;
            int ind = 1;
            for(int i = 0;i<n;i++)
            {
                if(m[v[i]].first>0 && m[v[i]].second == true)
                {
                    color[i]=m[v[i]].first--;
                }
                else if(m[v[i]].second == false && count <=sum)
                {   
                    if(ind > k)
                        ind = 1;
                    color[i] = ind;
                    count++;
                    ind++;
                }
            }
        }
        else
        {
            for(int i= 0;i<n;i++)
            {
                if(m[v[i]].first>0 && m[v[i]].second==true)
                {
                    color[i] = m[v[i]].first--;
                }
            }
        }

        fora(e,color)
        cout << e <<  " ";
        cout  << endl;
    }
    
}

