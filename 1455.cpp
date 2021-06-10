 int isPrefixOfWord(string sentence, string searchWord) {
        int ans = 0;
        string temp = "";
        bool b = true;
        for(int i = 0; i < sentence.size(); i++){
            if(sentence[i] == ' '){
                b = true;
                temp = "";
                continue;
            } else if(b == true){
                ans++;
                for(int j = i, k = 0; j < sentence.size() && k < searchWord.size() && sentence[j] != ' '; j++, k++){
                    temp += sentence[j];
                }
                b = false;
                if(temp == searchWord){
                    return ans;
                }
            }
        }
        return -1;
    }