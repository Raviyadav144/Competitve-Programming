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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    bool zero = false;
    vector<string>v(n);
    fora(e,v)
    {
        cin >> e;
        if(e=="0")
            zero = true;
    }
    if(zero)
    {
        cout << 0 << endl;
        return 0;
    }
    string count = "";
    string val = "";
    for(int i =0 ;i<n;++i)
    {   int one = 0;
        int count_zero = 0;
        for(int j = 0;j<v[i].size();++j)
        {
            if(v[i][j]=='1')
                one++;
            if(one ==2 || (v[i][j]!='1' && v[i][j]!='0'))
            {
                val  = v[i];
                count_zero = 0;
                break;
            }
            if(v[i][j]=='0')
                count_zero++;
        }
        for(int i = 0;i<count_zero;++i)
            count+="0";

    }
    if(val == "")
        cout << 1 << count << endl;
    else
        cout << val << count << endl;

}