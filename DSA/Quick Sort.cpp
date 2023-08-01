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

int pivotFix(vector<int> &v , int low , int high) 
{   
    int pivot= v[low];
    int i = low , j = high;
    while(i < j)
    {
        while(v[i] <= pivot && i <= high-1)
            ++i;
        while(v[j]>pivot&& j >= low+1)
            --j;
        if(i < j)
            swap(v[i] , v[j]);
    }
    swap(v[low] , v[j]);
    return j;
}
void quicksort(vector<int>&v,int low , int high )
{
    if(low < high )
    {
        int position = pivotFix(v , low , high);
        quicksort(v, low , position-1);
        quicksort(v, position +1 , high);

    }
    return ;
}
int main() 
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int>v(n); 
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }
    quicksort(v, 0 , n-1);
    fora(e, v)
    cout << e << " ";
    cout << endl;

   
};



