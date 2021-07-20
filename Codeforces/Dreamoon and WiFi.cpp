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

ll fact(ll a)
{

    if(a==1 || a==0 || a<0)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin >> a;
    

    ll plus = 0 , minus = 0;
    for(int i = 0;i<a.size();i++)
    {
        if(a[i]=='+')
            plus++;
        else
            minus++;
    }

    ll miss =0;
  
    string b;
    cin >> b;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='?')
            miss++;
        else if(b[i]=='+')
            plus--;
        else
            minus--;
    }
    float total = pow(2,miss);
    float ans = (fact(miss)/(fact(plus)*fact(minus)))/total;

    if(miss == 0 &&(plus!=0 || minus!=0))
    {
        cout << setprecision(12) << 0 << endl;
    }
    else if(miss==0 &&(plus==0 && minus==0))
    {
        cout << setprecision(12) << 1 << endl;
    }

    else
    {
        cout << fixed << setprecision(12) << ans << endl;
    }

    
    

}

