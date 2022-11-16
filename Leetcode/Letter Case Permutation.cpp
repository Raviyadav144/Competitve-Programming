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
    vector<string> letterCasePermutation(string s) {
        int n = s.length();
        set<string>val;
        for(int  i=  0 ; i < (1<<n) ; ++i)
        {
            string ans = "";
            int num = i;
            for(int i = 0 ; i <= n;++i)
            {
                if(num & 1)
                {
                    if(isalpha(s[i]))
                    {
                        ans+=(isupper(s[i]) ? tolower(s[i])  :  toupper(s[i]));
                    }
                    else
                    {
                        ans+=s[i];
                    }
                }
                else{
                    if(isalpha(s[i]))
                    {
                        ans+=s[i];
                    }
                    else
                    {
                        ans+=s[i];
                    }
                }
                num >>=1;
            }
            val.insert(ans);

        }
        vector<string> ans;
        for(auto &e :val)
        ans.push_back(e);
        return ans;
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
    string a;
    cin >> a;
    Solution sol;;
    vector<string> ans = sol.letterCasePermutation(a);
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