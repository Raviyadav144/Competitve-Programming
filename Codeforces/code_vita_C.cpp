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


vector<string> name, category;
vector<int>age;
vector<double> lat ,lon;

bool cmp(int a , int b)
{
    if(age[a] > age[b])
        return true;
    else
    {
        if(age[a]==age[b])
        {
            if(category[a]=="B" && category[b]=="A")
                return false;
            else
            {
                if(category[a]==category[b])
                {
                    if(name[a] > name[b])
                        return false;
                    else
                        return true;
                }
                return true;
            }
        }
        else
            return false;
    }
}
double dist(pair<double , double>p , double b , double c)
{
    return (sqrt(pow(p.first-b , 2) + pow(p.second - c , 2)));
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m;
    cin >> m;
    vector<pair<double , double>>loc;
    for(int i  = 0 ;i<m;++i)
    {
        double a , b;
        cin >> a >> b;
        loc.push_back({a,b});
    }
    int n ;
    cin >> n;
  
    for(int i = 0;i<n;++i)
    {
        string na , cat;
        int ag;
        double  lt ,ln;
        cin >> na >> ag >> cat >> lt >> ln;
        name.push_back(na);
        age.push_back(ag);
        category.push_back(cat);
        lat.push_back(lt);
        lon.push_back(ln);
    }

    vector<vector<int>>vac(m);
    for(int i = 0 ;i<n;++i)
    {
        int ind = 0;
        double val = DBL_MAX;
        int j;
        for( j = 0 ;j<m;++j)
        {
            double ans = dist(loc[j] , lat[i] , lon[i]);
            if(ans < val)
            {
                val = ans ;
                ind = j;
            }
        }
        vac[ind].push_back(i);
    }
    for(int i = 0 ;i<m;++i)
    {
        sort(vac[i].begin() , vac[i].end() , cmp);
    }
    for(int i = 0 ;i<m;++i)
    {
        if(vac[i].size()==0)
            cout << "Empty Centre" << endl;
        else 
            {
                int nn = vac[i].size();
                for(int j = 0;j<nn-1;++j)
                cout << name[vac[i][j]] << " ";
                cout << name[vac[i][nn-1]] << endl;
                
            }
    }

}  