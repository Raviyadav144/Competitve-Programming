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
    int a , x , y;
    cin >> a >> x >> y;
    if(x >=a || x<=(-a) || y==0 )
    {
        cout << -1 << endl;
        return 0;
    }
    int div = y/a;
    int mo = y%a;
    if(mo==0)
    {
        cout << -1 << endl;
        return 0;
    }
    if(div<=1)
    {
        if((float)x<=((float)-a/2) || (float)x>=((float)a/2))
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            cout << div+1 << endl;
            return 0;
        }
    }
    int count = 0;

    for(int i =1 ;i<=div;++i)
    {
        if(i<2)
            count++;
        else
        {   if(i&1)
                count+=2;
            else
                count++;
        }
    }
    
    if(div&1)
    {
        if((float)x<=((float)-a/2) || (float)x>=((float)a/2))
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            cout << count+1 << endl;
            return 0;
        }
    }
    else
    {   if(x==0)
        {
            cout << -1 << endl;
        }
        else if(x<0)
            cout << count+1 << endl;
        else
            cout << count+2 << endl;
    }
}
    

