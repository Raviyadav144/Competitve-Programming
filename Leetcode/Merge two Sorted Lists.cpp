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


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* dummy = new ListNode();
        ListNode * temp3 = dummy;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1 -> val <= temp2 -> val)
            {
                temp3 -> next =  temp1;
                temp1 = temp1 -> next;
            }
            else
            {
                temp3 -> next = temp2;
                temp2 = temp2 -> next;
                
            }
            temp3 = temp3 -> next;
            
        }
        if(temp1!= NULL)
        {
            temp3 -> next = temp1;
        }
        if(temp2 != NULL)
            temp3 -> next= temp2;
        
        return dummy -> next;
    }
};
int main()
{
  // blah  blah blah !! // basiclly two sorted linked list passed
  // passed into above class.
}