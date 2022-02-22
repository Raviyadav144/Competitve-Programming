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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy  = new ListNode(-1);
        ListNode* temp = dummy;
        int carry =0 ;
        while(l1 || l2 || carry)
        {
            int d= (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0) + carry;
            ListNode * temp1 = new ListNode(d%10);
            temp -> next= temp1;
            temp = temp -> next;
            carry = d/10;
            if(l1)
                l1 = l1 -> next;
            if(l2)
                l2 = l2 -> next;
            
        }
        return dummy -> next;
    }
};
int main()
{
   // Bsically two Lineked lists with values;
}