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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       vector<int> temp;
       for(auto head:lists){
        while(head !=nullptr){
            temp.push_back(head->val);
            head=head->next;
        }
       }
       if(temp.empty()){
        return nullptr;
       }
       sort(temp.begin(),temp.end());
       ListNode *head=new ListNode(temp[0]);
       ListNode* tail=head;
       for(int i=1;i<temp.size();i++){
        tail->next=new ListNode(temp[i]);
         tail=tail->next;
       }
       return head;
    }
};