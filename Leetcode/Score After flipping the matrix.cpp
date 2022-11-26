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
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size() , val = (1 << (m-1)) * n;
        
        for(int i = 1 ; i < m;++i)
        {
            int count = 0 ;
            for(int j = 0 ; j< n;++j )
            {
                count+=(grid[j][i] == grid[j][0]);
            }
            int max1 = max(count , n - count);
            val+=((1 << (m-i-1))*max1); 
        }
        return val;
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
    // while(n--)
    // {
    //     int a;
    //     cin >> a;
    //     v.push_back(a);
    // }
    // string first , goal;
    // cin >> first >> goal;
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    // Solution sol;;
    // vector<int>ans = sol.countBits(n);
    // fora(e , ans)
    // {
    //     // fora(v ,e)
    //     // {
    //     //     cout << v << " ";
    //     // }
    //     cout << e << endl;
    // }
    // // cout << ans << endl;
    // // cout << endl;
   
}