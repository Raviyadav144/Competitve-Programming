#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    
    while(t--)
    {   int i =2;
        vector<vector<int>> rect;
        while(i--)
        {    
            vector<int> corr;
            int a1 ,b,c,d;
            cin >> a1 >> b>> c >> d;
            corr.push_back(a1); //min X 0
            corr.push_back(b); // min Y 1
            corr.push_back(c); //max X 2
            corr.push_back(d); //max Y 3
            rect.push_back(corr);
        }
        int xl = max(rect[1][0],rect[0][0]);
        int yl = max(rect[1][1],rect[0][1]);
        int xr = min(rect[1][2],rect[0][2]);
        int yr = min(rect[1][3],rect[0][3]);
        if(xl<xr && yl<yr)
        {
            cout << xl << " "<<yl << " "<<xr<<" "<<yr<<endl;
            if(t!=0)
                cout << endl;

        }
        else
        {
            cout << "No Overlap" << endl;
            if(t!=0)
                cout << endl;
        }
    }



}

