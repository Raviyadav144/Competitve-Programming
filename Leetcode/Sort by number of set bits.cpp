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
    static bool cmp(int a, int b)
    {
        int c = a  ,d= b;
        int count1 = 0;
        while(a > 0)
        {
            a&=(a-1);
            ++count1;
        }
        int count2 = 0;
        while(b > 0)
        {
            b&=(b-1);
            ++count2;
        }
        if(count1 != count2)
            return count1 < count2;
        else
           return c < d;

    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin() , arr.end() , cmp);
        return arr;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    vector<int>v;
    int n ;
    cin>> n;
    while(n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // string first , goal;
    // cin >> first >> goal;
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    Solution sol;;
    vector<int>ans = sol.sortByBits(v);
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