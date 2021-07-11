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
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(ht[mid]<a)
            l=mid+1;
        else
            h=mid-1;
    }
    if(h<0)
        return -1;
    return ht[h];
}
int moree(vector<int> &ht , int a , int h, int l)
{
    while(l<=h)
    {   int mid = l+(h-l)/2;
        if(ht[mid]<=a)
            l=mid+1;
        else
            h = mid-1;
    }
    if(l>=(ht.size()))
        return -1;
    return ht[l];
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

