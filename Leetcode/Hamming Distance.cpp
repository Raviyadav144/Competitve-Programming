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

class Solution {
public:
    int hammingDistance(int x, int y) {
        
        return (__builtin_popcount(x ^ y));
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    // vector<int>v;
    // int n ;
    // cin>> n;
    // while(n--)
    // {
    //     int a;
    //     cin >> a;
    //     v.push_back(a);
    // }
    // string first , goal;
    // cin >> first >> goal;
    int x , y;
    cin >>  x >> y;
    Solution sol;;
    int ans = sol.hammingDistance(x , y);
    // fora(e , ans)
    // cout << e << " ";
    cout << ans << endl;
    // cout << endl;
   
}