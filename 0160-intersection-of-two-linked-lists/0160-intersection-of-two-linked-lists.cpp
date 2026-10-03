class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL)
            return nullptr;
        stack<ListNode*> st1;
        stack<ListNode*> st2;
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        while (curr1 != nullptr) {
            st1.push(curr1);
            curr1 = curr1->next;
        }
        while (curr2 != nullptr) {
            st2.push(curr2);
            curr2 = curr2->next;
        }
        ListNode* ans = nullptr;
        while (!st1.empty() && !st2.empty()) {
            if (st1.top() != st2.top())
                break;
            ans = st1.top();
            st1.pop();
            st2.pop();
        }
        return ans;
    }
};