class Solution {
public:
    int climbStairs(int n) {
        if (n < 3) 
            return n;
        int x = 1;
        int y = 2;
        int result;
        for (int i = 3; i <= n; i++) {
            result = y + x;
            x = y;
            y = result;
        }
        return result;
    }
};