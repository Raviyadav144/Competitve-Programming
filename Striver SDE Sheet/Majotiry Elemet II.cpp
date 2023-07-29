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
    vector<int> majorityElement(vector<int>& v) {
        int ele1 = INT_MIN , ele2 = INT_MIN , count1 = 0 , count2 = 0;
        int n =  v.size();
        for(int i =0 ; i < n;++i)
        {
            if(count1 == 0 && ele2 != v[i])
            {
                count1 = 1;
                ele1 = v[i];
            }
            else if(count2 == 0 && ele1 !=v[i])
            {
                ele2 = v[i];
                count2 = 1;
            }
            else if(v[i]==ele1)
            ++count1;
            else if(v[i]==ele2)
            ++count2;
            else
            --count1 , --count2;
        }
        int check1 = 0 , check2 = 0;
        for(int i =0 ; i < n;++i)
        {
            if(v[i]==ele1)
            ++check1;
            if(v[i]==ele2)
            ++check2;
        }
        cout << ele1 << " " << ele2 <<" " << count1 << " " << count2 << endl;
        if(ele1 == ele2 && check1 > (n/3))
        return {ele1};
        vector<int>ans;
        if(check1 > (n/3))
        ans.push_back(ele1);
        if(check2 > n/3)
        ans.push_back(ele2);
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // vector<int>v;
    // int n;
    // cin>> n;


    Solution sol;
    // vector<int> ans  = sol.getRow(n);
    vector<int>v1 = {2,1,1,3,1,4,5,6};
    vector<int>v = sol.majorityElement(v1);
    fora(e , v)
    {
        // fora(a ,e)
        // {
        //     cout << a<< " ";
        // }
        // cout << endl;
        cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}