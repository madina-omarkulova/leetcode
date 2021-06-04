class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pr = 1, zer = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == 0){
                zer++;
                continue;
            }
            pr *= nums[j];
        }
        for(int i = 0; i < nums.size(); i++){
            if((zer > 0 && nums[i] != 0)){
                ans.push_back(0);
                continue;
            }
            if(nums[i] == 0){
                if(zer > 1)
                    ans.push_back(0);
                else 
                    ans.push_back(pr);
                continue;
            }
            ans.push_back(pr/nums[i]);
        }
        return ans;
    }
};