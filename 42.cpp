int trap(vector<int>& height) {
        int ans = 0, n = height.size();    
        for (int i = 1; i < n-1; i++) {
            int left = height[i];
            for (int j=0; j<i; j++)
                left = max(left, height[j]);
            int right = height[i];
            for (int j=i+1; j<n; j++)
                right = max(right, height[j]);   
            ans += (min(left, right) - height[i]);  
        }
        return ans;
    }