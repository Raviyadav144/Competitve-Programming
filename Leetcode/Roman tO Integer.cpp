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
    int romanToInt(string s) {
        unordered_map<char , int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int val =0 ;
        for(int i =1 ;i<s.size();++i)
        {
            if(m[s[i-1]]<m[s[i]])
            {
                
                val+= (m[s[i]] - m[s[i-1]]);
                val -= m[s[i-1]];
                
            }
            else
                val+=m[s[i]];
        }
        // if(m[s[0]] >= m[s[1]])
            val+=m[s[0]];
        return val;
        
        
    }
};

int main()
{
    string a;
    cin >> a;
    Solution s1;
    int b = s1.romanToInt(a);
    cout << b << endl;
}