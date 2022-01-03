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
    bool isValid(string s) {
        stack<char>st;
        if(s.size()==1)
            return false;
        bool val = true;
        for(int i = 0 ;i<s.size();++i)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
                st.push(s[i]);
            else if(!st.empty() && st.top()=='{' && s[i]=='}')
                st.pop();
            else if(!st.empty() && st.top()=='(' && s[i]==')')
                st.pop();
            else if(!st.empty() && st.top()=='[' && s[i]==']')
                st.pop();
            else
            {
                val = false;
                break;
            }
                
        }
        if(st.empty() && val)
            return true;
        else
            return false;
    }
};
int main()
{
    string a;
    cin >> a;
    
    Solution s1;
    bool b = s1.isValid(a);
    cout << b << endl;
}