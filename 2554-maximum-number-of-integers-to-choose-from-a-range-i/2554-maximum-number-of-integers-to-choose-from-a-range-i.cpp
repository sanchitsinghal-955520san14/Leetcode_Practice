class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(), banned.end());
        int count = 0;
        int sum = 0;
        int i = 1, j = 0;
        while (i <= n) {
            while (j < banned.size() && banned[j] < i)
                j++;
            if (j < banned.size() && banned[j] == i) {
                i++;
                continue;
            }
            if (sum + i > maxSum)
                break;
            sum += i;
            count++;
            i++;
        }
        return count;
    }
};