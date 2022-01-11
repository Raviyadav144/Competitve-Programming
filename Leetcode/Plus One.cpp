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
    vector<int> plusOne(vector<int>& digits) {
        int n  = digits.size();
        int carry = (digits[n-1]+1)/10 ;
        digits[n-1] = (digits[n-1]+1)%10;
        for(int i = n-2;i>=0;--i)
        {
            
            int temp = (digits[i]+carry);
            carry = temp/10;
            digits[i] = temp%10;
            
        }
        if(carry)
        {
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};
int main()
{
   vector<int>v = {9,9,9};
   Solution s1;
   vector<int>v1 = s1.plusOne(v);
   fora(e,v1)
   cout << e << " ";


}