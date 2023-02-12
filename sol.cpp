class Solution {
public:

    unordered_map<int, int> ord;
    int getMinDays(int n) {

        if (n == 0) {
            return -1;
        }
        if (ord.find(n) == ord.end()) {
            int a = (n%3) + getMinDays((int)floor((double)n/3.0));
            int b = (n%2) + getMinDays((int)floor((double)n/2.0));
            ord[n] = 1 + min(a,b);
            
        }
        return ord[n];
    }
    int minDays(int n) {
        return getMinDays(n);
    }
};
