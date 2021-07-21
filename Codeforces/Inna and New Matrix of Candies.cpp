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
    int n,m;
    cin >> n >> m;
    int dist = 0;
    set<int> st;
    for(int i =1 ;i<=n;i++)
    {   int dwarf , candy;
        for(int j=1;j<=m;j++)
        {
            char a;
            cin >> a;
            if(a=='G')
                dwarf = j;
            if(a=='S')
                candy = j;
        }
        if(candy < dwarf)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            st.insert(candy-dwarf);
        }

    }
    cout << st.size() << endl;



}

