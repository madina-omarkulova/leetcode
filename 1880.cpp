class Solution {
public:
    int toInt(string s) {
        string a = {"abcdefghij"};
        int p = 1, num = 0;
        for(int i = s.size()-1; i >= 0; i--){
            for(int j = 0; j < 10; j++){
                if( a[j] == s[i]){
                    num += (j*p);
                    p *= 10;
                    break;
                }
            }
        }
        return num;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int f = toInt(firstWord), s = toInt(secondWord), t = toInt(targetWord);
        if( f + s == t){
            return true;
        }
        return false;
    }
};