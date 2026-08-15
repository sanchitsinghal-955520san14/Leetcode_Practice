class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> temp;
        ListNode* curr = head;
        while (curr != nullptr) {
            temp.push_back(curr->val);
            curr = curr->next;
        }
        int i = 0;
        int j = temp.size() - 1;
        int ans = 0;
        while (i < j) {
            ans = max(ans, temp[i] + temp[j]);
            i++;
            j--;
        }
        return ans;
    }
};