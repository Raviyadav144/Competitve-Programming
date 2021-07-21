#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)

int t1 , t2;
 double k;


bool comp(pair<double,int>p1 , pair<double,int>p2)
{
    if(p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first > p2.first;
}
double height(int a,int t)
{
    double ht = a*t;
    return ht;
}

double maxHeight(int a , int b)
{   double tot;

    double h1 = height(a,t1);
    h1 = h1-(h1*(k/100.0));

    double h2 = height(b,t2);

    double h3 = height(b,t1);
    h3 = h3-(h3*(k/100.0));
    double h4 = height(a,t2);

    tot = max((h1+h2),(h3+h4));
    
    return tot;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<double,int>> table;
    for(int i=1;i<=n;++i)
    {
        double a , b;
        cin >> a >> b;
        table.push_back({maxHeight(a,b),i});

    }

    sort(all(table),comp);
    fora(e,table)
    cout <<fixed << setprecision(2)<< e.second << " "<<e.first << endl;
}

