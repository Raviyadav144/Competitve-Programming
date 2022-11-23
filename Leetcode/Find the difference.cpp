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
    char findTheDifference(string s, string t) {
        int val = 0;
        for(int i= 0; i< s.length();++i)
        {
            val^=((int)s[i]);
        }
        for(int i =0 ; i< t.size();++i)
        {
            val ^=((int)t[i]);
        }
        // cout << char(val) << endl;
        return char(val);

    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    vector<int>v;
    // int n ;
    // cin>> n;
    // while(n--)
    // {
    //     int a;
    //     cin >> a;
    //     v.push_back(a);
    // }
    string first , goal;
    cin >> first >> goal;
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    Solution sol;;
    char ans = sol.findTheDifference(first , goal);
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