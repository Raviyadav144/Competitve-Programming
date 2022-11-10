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
    string addBinary(string a, string b) {
         
        int i = a.size()-1;
        int j = b.size()-1;
        string ans = "";
        int carry = 0 ;

        while( i >=0 || j >=0)
        {
            int sum = 0;
            if( i>=0)
                sum+=(a[i--]-'0');
            if(j >=0)
                sum+=(b[j--]-'0');
            sum+=carry;
            carry = (sum > 1 ? 1 : 0);
            string c= to_string(sum%2);
            ans+=c;
            
        }
        if(carry)
        ans+='1';
        reverse(ans.begin() , ans.end());
        // cout << ans << endl;
        return ans ;
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
    string first , goal;
    cin >> first >> goal;
    Solution sol;;
    string ans = sol.addBinary(first , goal);
    // fora(e , ans)
    // cout << e << " ";
    cout << ans << endl;
    // cout << endl;
   
}