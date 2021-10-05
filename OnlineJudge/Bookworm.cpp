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
#define debug(v) for(auto & e :v) cout << e << endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int vol , cover , start , end;
    cin >> vol >> cover >> start >> end;

    if(start < end)
    {
        int diff = end - start - 1;
        int length = (diff)*vol;
        length+=((end-start)*2*cover);
        cout << length << endl;
    }
    else
    {
        int length = (start-end+1)*vol;
        length+=(start-end)*2*cover;
        cout << length << endl;
    }


}