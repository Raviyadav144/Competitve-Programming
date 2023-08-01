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

void merge(vector<int>&v , int low , int mid , int high)
{
    vector<int>temp;
    int left = low , right = mid+1;
    while(left <= mid  && right <=high)
    {
        if(v[left]<=v[right])
        {
            temp.push_back(v[left]);
            ++left;
        }
        else
        {
            temp.push_back(v[right]);
            ++right;
        }
        
    }
    while(left<= mid)
        {
            temp.push_back(v[left]);
            ++left;
        }
        while(right <= high)
        {
            temp.push_back(v[right]);
            ++right;
        }
        for(int i = low ; i <=high ; ++i)
        {
            v[i] = temp[i - low];
        }
}
void mergeSort(vector<int>&v ,int low , int high)
{
    if(low== high)
    {
        return;
    }
    int mid = low+(high - low)/2;
    mergeSort(v, low , mid );
    mergeSort(v,mid+1 , high);
    merge(v , low , mid , high);
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
    mergeSort(v, 0 , n-1);
    fora(e, v)
    cout << e << " ";
    cout << endl;

   
};



