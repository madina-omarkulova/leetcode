int findLucky(vector<int>& arr) {
        vector<int> count_arr(501,0);
        int i, ans = -1;
        for(auto k : arr)
            count_arr[k]++; 
        for(auto n : arr)
            if(n == count_arr[n] && n > ans)
                ans = n;        
        return ans;
    }