class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, s = 0;
        map<int, int> m;
        m[0]++;
        for (int i = 0; i < nums.size(); i++) {
            s += nums[i];
            cout<<s<<endl;
            ans += m[s - k];
            cout<<ans<<endl;
            m[s]++;
        }
        return ans;
    }
};