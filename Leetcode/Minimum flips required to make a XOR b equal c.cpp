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
    int minFlips(int a, int b, int c) {
        string a1 = "" , b1 = "" , c1 = "";
        for(int i = 0 ; i<=64;++i)
        {
            a1+=(to_string(a &1));
            a>>=1;
            b1+=(to_string(b &1));
            b >>=1;
            c1+=(to_string(c&1));
            c >>=1;
        }
        // cout <<a1 << " " << b1 << " " << c1 << endl;
        int count = 0 ;
        for(int i = 0 ; i<=64;++i)
        {

            if(((a1[i] - '0') || (b1[i]-'0')) != (c1[i]-'0'))
            {   
                if(c1[i]=='0')
                {
                    if(a1[i]=='1')
                    ++count;
                    if(b1[i]=='1')
                    ++count;
                }
                else
                {
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
    int a , b ,c ;
    cin >> a >> b >> c;
    // cout << a << b << c;
    Solution sol;;
    int ans = sol.minFlips(a , b, c);
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