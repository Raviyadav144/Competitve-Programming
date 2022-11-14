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
    vector<int> decode(vector<int>& encoded) {
        int first = 0 ;
        vector<int>ans;
        for(int i = 0 ; i <= encoded.size()+1;++i)
        {
            first ^=i;
            if(i&1 && i<encoded.size() )
            first ^=encoded[i];
        }
        ans.push_back(first);
        for(int i = 0 ; i<encoded.size();++i )
        {
            ans.push_back(ans.back() ^ encoded[i]);
        }
        return ans;

    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    vector<int>v;
    int n ;
    cin>> n;
    while(n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // string first , goal;
    // cin >> first >> goal;
    
    Solution sol;;
    vector<int> ans = sol.decode(v);
    fora(e , ans)
    cout << e << " ";
    // cout << ans << endl;
    // cout << endl;
   
}