string originalDigits(string s) {
        int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        char let[10] = {'z', 'o', 'w', 'h', 'u', 'f', 'x', 'v', 'g', 'i'};
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < 10; j++){
                if(let[j] == s[i]){
                    num[j]++;
                    break;
                }
            }
        }
        num[1] = num[1] - num[0] - num[2] - num[4];
        num[3] = num[3] - num[8];
        num[5] = num[5] - num[4];
        num[7] = num[7] - num[5];
        num[9] = num[9] - num[8] - num[6] - num[5];
        string ans = "";
        for(int i = 0; i < 10; i++){
            if(num[i] > 0){
                for(int k = 0; k < num[i]; k++){
                    ans += (i+48);
                }
            }
        }
        return ans;
    }