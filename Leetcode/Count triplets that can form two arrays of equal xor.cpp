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
    int countTriplets(vector<int>& arr) {
        vector<int>pre_xor ;
        pre_xor.push_back(0);
        pre_xor.push_back(arr[0]);
        int count = 0 ;
        for(int i = 1; i< arr.size();++i)
        {
            pre_xor.push_back(pre_xor.back() ^ arr[i]);
        }
        for(int i = 1 ; i <= arr.size();++i)
        {
            for(int j= i+1 ; j<=arr.size();++j)
            {
                for(int k = j; k <=arr.size();++k)
                {
                    if((pre_xor[j] ^ pre_xor[i-1]) == (pre_xor[k] ^pre_xor[j]))
                    ++count;
                }
            }
        }
        return count;
        
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
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    Solution sol;;
    int ans = sol.countTriplets(v);
    // fora(e , ans)
    // {
    //     // fora(v ,e)
    //     // {
    //     //     cout << v << " ";
    //     // }
    //     cout << e << endl;
    // }
    cout << ans << endl;
    // cout << endl;
   
}