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
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count = 0 ;
        for(int i = n-1;i>=0;--i)
        {
            if(s[i]==' ' && count ==0)
                continue;
            else if(s[i]==' ' && count !=0)
                return count;
            else
                count++;
        }
        return count;
    }
};
int main()
{
   string a = " Hello World";
   Solution s1;
   int b = s1.lengthOfLastWord(a);
   cout << b << endl;


}