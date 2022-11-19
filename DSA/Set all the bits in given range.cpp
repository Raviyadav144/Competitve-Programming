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
  
    int setAllRangeBits(int N , int L , int R) {
       int mask = (1 << (R-L+1))-1 ;

       mask <<=L-1;
      
        return N | mask;
    }
};

int main() 
{	
	ios::sync_with_stdio(false);
    cin.tie(0);
    int n , l  , r;
    cin >> n >> l >> r;
    Solution s1;
    cout << s1.setAllRangeBits(n , l , r) <<endl;
    
}
