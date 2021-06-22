string interpret(string s) {
        string ans  = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'G'){
                ans += "G";
                continue;
            }
            i++;
            if(s[i] == ')'){
                ans  +=  "o";
                continue;
            }
            i += 2;
            ans += "al";
        }
        return ans;
    }