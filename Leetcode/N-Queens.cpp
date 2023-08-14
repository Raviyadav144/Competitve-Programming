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
bool valid (int i, int col, vector<bool>&row , vector<bool>&downDiag , vector<bool>&upDiag , int n)
{
    return row[i] && downDiag[i+col] && upDiag[n-1 + col -i];
}
    void puttingQueens(int n , int col , vector<vector<string>>&ans , vector<string>&board , vector<bool>&row , vector<bool>&downDiag , vector<bool>&upDiag)
    {
        if(col == n )
        {
            ans.push_back(board);
            // cout << board[0] << endl;
            // cout << ans[0][0] << endl;
            // cout << "YES" << endl;
            return ;
        }
        for(int i = 0 ; i < n ;++i)
        {
            if(valid(i , col , row, downDiag , upDiag, n ))
            {
                board[i][col] = 'Q';
                row[i] = false;
                downDiag[i+col] = false;
                upDiag[n-1 + col - i] = false;
                puttingQueens(n, col+1 , ans, board, row, downDiag, upDiag);
                 row[i] = true;
                downDiag[i+col] = true;
                upDiag[n-1 + col - i] = true;
                board[i][col] = '.';

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        vector<bool> row(n, true), downDiag(2*n-1, true) , upDiag(2*n-1, true);
        string a(n, '.');
        for(int i =0  ;i < n ;++i)
        {
            board[i] = a;
        }
       
        puttingQueens(n, 0, ans, board, row, downDiag , upDiag);
        return ans;

    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution s1;
    vector<vector<string>>ans = s1.solveNQueens(4);
    cout << ans.size() << endl;
    fora(e, ans)
    {
        fora(v , e)
        cout << v<< endl;
        cout << endl;
    }
       
    
}