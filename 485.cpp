int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, t = 0;
        for (auto k : nums) {
            if (k == 1) 
                ans = max(++t, ans);
            else 
                t = 0;
        }
        return ans;
    }