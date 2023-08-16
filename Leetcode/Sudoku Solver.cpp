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
    bool valid(int row , int col , char c, vector<vector<char>>& board)
    {
        for(int i = 0 ; i < 9 ; ++i)
        {
            if(board[row][i]==c)
                return false;
            if(board[i][col] == c)
            return false;
            if(board[3 * (row/3)+ i/3][3 * (col/3) + i %3]==c)
            return false;
            
        }
        return true;
    }
    bool sudoku(vector<vector<char>>& board)
    {
        for(int i =0; i < 9 ; ++i)
        {
            for(int j =0 ; j < 9 ; ++j)
            {
                if(board[i][j] == '.')
                {
                    for(char c= '1'; c <='9';++c)
                    {
                        if(valid(i , j ,c,board ))
                        {
                            board[i][j] = c;
                            if(sudoku(board) == true)
                            return true;
                            else
                             board[i][j] = '.';
                                

                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board);
        
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Solution s1;
    // vector<vector<string>>ans = s1.solveNQueens(4);
    // cout << ans.size() << endl;
    // fora(e, ans)
    // {
    //     fora(v , e)
    //     cout << v<< endl;
    //     cout << endl;
    // }
       
    
}