#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
//#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)



    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a = "ABC";
    int n = 3;
    int count=0;
   
        
        map<char,int>m = {{'A',5},{'B',5},{'C',5}};
        
        while(n--)
        {
            string con;
            cin >> con;
            if(con[1]=='>')
             {
                m[con[0]]+=2;
                m[con[2]]-=2;
             }
             else
             {
                m[con[0]]-=2;
                m[con[2]]+=2;
             }
        }
        vector<pair<int,char>> v;
        set<int>st;
        fora(e,m)
        {
            v.push_back({e.second,e.first});
            st.insert(e.second);

        }
        if(st.size()<3)
        {
            cout << "Impossible" << endl;
            return 0;
        }
        sort(all(v));
        fora(e,v)
        cout << e.second;
        cout << endl;

    
}

