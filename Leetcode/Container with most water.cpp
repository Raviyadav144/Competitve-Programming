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
    int maxArea(vector<int>& height) {
        int i = 0 , j = height.size()-1;
        int water = 0;
        while(i<j)
        {
            int ht= min(height[i],height[j]);
            water = max(water,ht*(j-i));
            while(height[i]<=ht && i<j)
                ++i;
            while(height[j]<=ht && i<j)
                --j;
        }
        return water;
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   // input for the fucntion

   
}