#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--)
    {
        float a;
        cin >> a;
        float n = (360/(180.0-a));
        if(n==floor(n))
        cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }


}

