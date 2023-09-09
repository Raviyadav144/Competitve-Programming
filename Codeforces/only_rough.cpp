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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ath[n+1][6];
        for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=5;j++ )
                {
                    cin >> ath[i][j];
                }
            }
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<pair<double,int>>sup(n+1);

        for(int i  =1;i<=n;i++)
        {
            sup[i].second = i;
            double sum = 0;
            for(int j =1 ;j<=5;j++)
            {
                
                sum+=ath[i][j];
            }
            sup[i].first = (sum/5.0);
        }
        sort(all(sup));
        fora(e,sup)
        cout << e.first << " " << e.second << endl;
        bool check = false;

        for(int i = 1;i<n;i++)
        {   int count = 0;
            int sup_ind = sup[i].second;
            int sup_next = sup[i+1].second;
            for(int j=1;j<=5;j++)
            {
                if(ath[sup_ind][j]<ath[sup_next][j])
                    count++;
            }
            if(count < 3)
            {   cout << sup_ind << " "<< sup_next<< endl;
                check = true;
                break;
            }
        }
        if(check)
            cout << -1 << endl;
        else
            cout << sup[1].second << endl;
        
    }


}

