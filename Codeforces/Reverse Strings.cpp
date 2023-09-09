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
        string a , b;
        cin >> a >> b;
        int it = 0;
        
        auto ind = a.find(b[it]);

        if(ind == string::npos)
        {
            cout << "NO" << endl;
            continue;
        }
        it++;
        bool check = false;
        for(int i = ind+1;i<a.size();++i)
        {
            if(it==b.size())
            {
                check = true;
                break;
            }
            if(a[i]==b[it])
            {   
                it++;
            }
        }
        if(check || it ==b.size())
        {   cout <<"YES" << endl;
            continue;
        }
        for(int i = a.size()-2;i>=0;--i)
        {
            if(it==b.size())
            {
                check = true;
                cout << "YES" << endl;
                break;
            }
            if(a[i]==b[it])
                it++;
        }
        if(check)
            continue;

        if(it==b.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    
}

