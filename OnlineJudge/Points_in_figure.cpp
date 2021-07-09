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
    vector<vector<double>> rect;
    while(true)
    {
        char a;
        cin >> a;
        if(a=='*')
            break;
        vector<double> corr;
        double a1 ,b,c,d;
        cin >> a1 >> b>> c >> d;
        corr.push_back(a1); //min X
        corr.push_back(d); // min Y
        corr.push_back(c); //max X
        corr.push_back(b); //max Y
        rect.push_back(corr);
    }
    double x1 , y1;
    int count =0;
    bool check = false;
    while(cin >> x1 >> y1)
    {   count++;
        if(x1 == 9999.9 && y1 == 9999.9  )
            return 0;
        for(int i=0;i<rect.size();i++)
        {
            if(x1 < rect[i][2] && x1 > rect[i][0] && y1 < rect[i][3] && y1 > rect[i][1])
            {
                cout << "Point "<< count << " is contained in figure "<< i+1 << endl;
                check = true; 
            }
        }
        if(!check)
        {
            cout << "Point "<< count << " is not contained in any figure" <<endl;
        }
        check = false;
    }


}

