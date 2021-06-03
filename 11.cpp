class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxim = 0, i = 0, n = height.size()-1;
        while(i < n){
            int m = min(height[i], height[n]);
            maxim = max(maxim, m*(n-i));
            if(height[n] > height[i]){
                i++;
            } else{
                n--;
            }
        }
        return maxim;
    }
};