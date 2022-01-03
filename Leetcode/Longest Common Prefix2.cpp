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


 bool cmp(string a , string b)
    {
        return a.size() < b.size();
    }
class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b= strs[strs.size()-1];
        string ans = "";
        for(int i = 0 ;i<a.size();++i)
        {
            if(a[i]==b[i])
                ans+=a[i];
            else
                break;
        }
        return ans;
        
        
    }
};

int main()
{
    vector<string>v;
    v = {"flower","flow","flight"};
    Solution s1;
    string b = s1.longestCommonPrefix(v);
    cout << b << endl;
}