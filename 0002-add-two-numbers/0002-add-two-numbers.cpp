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
       return solve(l1,l2,0);
    }
    ListNode* solve(ListNode* l1,ListNode*l2,int carry){
        if(l1==nullptr && l2==nullptr && carry==0){
            return nullptr;
        }
        int sum=carry;
        if(l1){
            sum += l1->val;
        }
        if(l2){
            sum += l2->val;
        }
        ListNode* head=new ListNode(sum%10);
        head->next=solve(
            (l1 != NULL) ? l1->next : NULL,
            (l2 != NULL)? l2->next :NULL,
            sum /10
            );
        return head;    
    } 
};