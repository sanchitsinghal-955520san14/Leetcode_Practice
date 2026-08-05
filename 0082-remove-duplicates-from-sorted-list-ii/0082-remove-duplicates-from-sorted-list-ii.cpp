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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        vector<int> ans;
        while (curr != nullptr) {
            ans.push_back(curr->val);
            curr = curr->next;
        }
        vector<int> finAns;
        unordered_map<int, int> freq;
        for (auto x : ans) {
            freq[x]++;
        }
        for (auto x : ans) {
            if (freq[x] == 1)
                finAns.push_back(x);
        }
        if (finAns.empty())
            return nullptr;
        ListNode* newHead = new ListNode(finAns[0]);
        ListNode* tail = newHead;
        for (int i = 1; i < finAns.size(); i++) {
            tail->next = new ListNode(finAns[i]);
            tail = tail->next;
        }
        return newHead;
    }
};