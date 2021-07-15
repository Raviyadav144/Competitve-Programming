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
    int n ;
    cin >> n;

    vector<ll> elements(n+1);
    for(int i =1;i<=n;++i)
        cin >>elements[i];

    vector<ll> preSum(n+1);
    for(int i =1;i<=n;++i)
    {
        preSum[i] = preSum[i-1]+elements[i];
    }

    sort(all(elements));
    vector<ll> sortedSum(n+1);
    for(int i=1;i<=n;++i)
    {
        sortedSum[i] = sortedSum[i-1]+elements[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if(a==1)
        {
            cout << preSum[c] - preSum[b-1] <<endl; 
        }
        else
            cout << sortedSum[c]- sortedSum[b-1] << endl;
    }



}