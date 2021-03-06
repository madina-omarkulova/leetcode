class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int k;
        for (int i= 0; i < n; i++) {
            k = abs(nums[i]) -1;
            nums[k] = -abs(nums[k]);
        }
        vector <int> res;
        for (int i = 0; i < n; i++) {
            if (nums[i] >0) {
                res.push_back(i+1);
            }
        }
        return res;
    }
};