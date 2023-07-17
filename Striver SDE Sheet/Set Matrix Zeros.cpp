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
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>row(n, 0), col(m,0);
        for(int i =0; i< n ;++i)
        {
            for(int j  = 0 ;  j < m ;++j)
            {
                if(matrix[i][j]==0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i = 0 ; i < n;++i)
        {
           if(row[i]==1)
           {
               for(int j = 0; j < m;++j)
               {
                   matrix[i][j] = 0;
               }
           }
        }
        for(int i = 0 ; i < m;++i)
        {
           if(col[i]==1)
           {
               for(int j = 0; j < n;++j)
               {
                   matrix[j][i] = 0;
               }
           }
        }
        
    }
};
int main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>>v;
    v.push_back({1,2});
    cout << v.size() << endl;
}