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
    int numberOfSteps(int num) {
        int count = 0;
        while(num>0)
        {
            if(num&1)
                num-=1;
            else
                 num >>= 1;
            ++count;
        }
        return count;
        
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
    int first;
    cin >> first;
    Solution sol;;
    int ans = sol.numberOfSteps(first);
    // fora(e , ans)
    // cout << e << " ";
    cout << ans << endl;
    // cout << endl;
   
}