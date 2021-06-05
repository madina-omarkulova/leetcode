vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            int n = 0;
            for(int k = i; k > 0; k/=2){
                n += (k%2);
            }
            ans.push_back(n);
        }
        return ans;
    }