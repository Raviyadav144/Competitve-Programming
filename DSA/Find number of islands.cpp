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

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int x[8] = {1,0,-1,0,-1,1,-1,1};
    int y[8] = {0,1,0,-1,-1,-1,1,1};
    bool valid(int i , int j , vector<vector<char>>&grid , vector<vector<bool>>&visited)
    {
        return i>=0 && j>=0 && i<grid.size() && j< grid[0].size() &&!visited[i][j] && grid[i][j]=='1';
    }
    
    void dfs(int i , int j,vector<vector<char>>&grid, vector<vector<bool>>&visited)
    {
        visited[i][j] = true;
        for(int k =0 ;k<8;++k)
        {
            if(valid(i+x[k],j+y[k], grid , visited))
            {
                dfs(i+x[k],j+y[k] , grid , visited);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>visited( grid.size() ,vector<bool>(grid[0].size(),false));
        int count = 0;
        for(int i = 0 ;i<n;++i)
        {
            for(int j = 0 ;j<m;++j)
            {
                if(valid(i,j, grid , visited))
                {
                    count++;
                    dfs(i,j,grid,visited);
                    
                }
            }
        }
    return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends