class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            vector<int> temp  = vector<int>(i, 1);
            if(i > 2){
                for(int j = 1; j <= temp.size()-2; j++){
                    temp[j] = ans[ans.size()-1][j-1] + ans[ans.size()-1][j];
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};