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
        int n = strs.size();
        sort(strs.begin(),strs.end(),cmp);
        string a = strs[0];
        int s = strs[0].size();
        bool val = false;
        for(int i =s ;i>0;--i)
        {
            for(int j = 0 ;j<n;++j)
            {
                if(a.substr(0,i)!=strs[j].substr(0,i))
                    val = true;
            }
            if(!val)
                return a.substr(0,i);
            val = false;
        }
        return "";
        
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