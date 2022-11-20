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
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>pre_xor;
        int n = arr.size();
        pre_xor.push_back(arr[0]);
        for(int i = 1 ;i < n;++i)
        {
            pre_xor.push_back(pre_xor.back() ^ arr[i]);
        }
        vector<int>ans;
        for(int i =0 ; i < queries.size();++i)
        {
            int l = queries[i][0] ,r = queries[i][1];
            if(l==0)
            ans.push_back(pre_xor[r]);
            else if(r==n-1)
            ans.push_back(pre_xor.back() ^ pre_xor[l-1]);
            else
            {
                ans.push_back(pre_xor[r] ^ pre_xor[l-1]);
            }
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
    vector<vector<int>>v1 = {{0,1},{1,2},{0,3},{3,3}};
    // string first , goal;
    // cin >> first >> goal;
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    Solution sol;;
    vector<int> ans = sol.xorQueries(v , v1);
    fora(e , ans)
    {
        // fora(v ,e)
        // {
        //     cout << v << " ";
        // }
        cout << e << endl;
    }
    // cout << ans << endl;
    // cout << endl;
   
}