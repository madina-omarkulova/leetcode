int maxProfit(vector<int>& prices) {
        int mx = prices[0];
        int ans = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < mx){
                mx = prices[i];
            }else if(prices[i] - mx > ans){
                ans = prices[i] - mx;
            }
        }
        return ans;
    }