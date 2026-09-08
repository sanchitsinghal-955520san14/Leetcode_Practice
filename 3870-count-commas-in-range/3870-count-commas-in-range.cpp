// class Solution {
// public:
//     int countCommas(int n) {
//        string s=to_string(n);
//        if(s.size()<=3)return 0;
//        int count=0;
//        if(s.size()>=4){
//         for(int i=1000;i<=n;i++){
//             count += n-1000;
//         }
//        } 
//        return count;
//     }
// };
class Solution {
public:
    int countCommas(int n) {
        long long count = 0;
        if (n >= 1000) {
            count += n - 1000 + 1;
        }
        if (n >= 1000000) {
            count += n - 1000000 + 1;
        }
        if (n >= 1000000000) {
            count += (long long)n - 1000000000 + 1;
        }
        return count;
    }
};