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
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>arr;
        arr.push_back(first);
        for(int i = 0 ; i < encoded.size();++i)
        {
            arr.push_back(arr[i] ^ encoded[i]);
        }
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
    int first;
    cin >> first;
    Solution sol;;
    vector<int> ans = sol.decode(v, first);
    fora(e , ans)
    cout << e << " ";
    cout << endl;
   
}