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

int lesss(vector<int>&ht , int a,int h , int l)
{
    while(h-l>1)
    {
        int mid = l+(h-l)/2;
        if(ht[mid]<a)
            l=mid;
        else
            h=mid-1;
    }
    if(ht[h]<a)
        return ht[h];
    if(ht[l]<a)
        return ht[l];
    else return -1;
}
int moree(vector<int> &ht , int a , int h, int l)
{
    while(h-l>1)
    {   int mid = l+(h-l)/2;
        if(ht[mid]<=a)
            l=mid+1;
        else
            h = mid;
    }
    if(ht[l]>a)
        return ht[l];
    if(ht[h]>a)
        return ht[h];
    else return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int> ht(n);
    fora(e,ht)
    cin >> e;
    int q;
    cin >> q;
    while(q--)
    {
        int a;
        cin >> a;
        int h = ht.size()-1 , l = 0;
        int les = lesss(ht,a,h,l);
        int mor = moree(ht,a,h,l);
        if(les==-1)
            cout << "X ";
        else
            cout << les <<  " ";
        if(mor ==-1)
            cout << "X" << endl;
        else
            cout << mor << endl; 
    }
}

