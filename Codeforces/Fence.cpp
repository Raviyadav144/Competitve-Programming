#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
//#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)


    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vector<int> planks(n+1);

    for(int i =1;i<=n;++i)
    {
        int a ;
        cin >> a;
        planks[i] = planks[i-1]+a;
    }
    int ind =-1;
    int pla = INT_MAX;
    for(int i=k;i<=n;++i)
    {
        int val = planks[i] - planks[i-k];
        if(val< pla)
        {
            pla = val;
            ind = i;
        }
    }
        cout << ind-(k-1) << endl;

}