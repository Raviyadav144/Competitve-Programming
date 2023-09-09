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
#define mod 1000000009

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //chokudai
    vector<pair<string,string>> cho = {{"c","hokudai"},{"ch","okudai"},{"cho","kudai"},{"chok","udai"},{"choku","dai"},{"chokud","ai"},{"chokuda","i"},{"chokudai",""}};
    string s;
    cin >> s;
    ll sum = 0;
    int j = 1;
    fora(e,cho)
    {   ll ans = 0;
        ll first = 0;
            ll second = 0;
        for(int i = 0;i<s.size();i++)
        {   
            if(s.substr(i,j)==e.first)
            {
                first++;
            }
            if(s.substr(i,8-j)==e.second)
            {
                second++;
            }
           
            ans = (first*second)%mod;
        }
        j++;
        sum = (sum+(ans))%mod;
    }
    cout << sum << endl;
}

