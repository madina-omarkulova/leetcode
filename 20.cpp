class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                k.push(s[i]);
            } else if(s[i] == ')') {
                if(i == 0 ||  k.empty() || k.top() != '(') {
                    return false;
                }
                k.pop();
            } else if(s[i] == ']') {
                if(i == 0 || k.empty() || k.top() != '[') {
                    return false;
                }
                k.pop();
            } else if(s[i] == '}') {
                if(i == 0 || k.empty() || k.top() != '{') {
                    return false;
                }
                k.pop();
            }
        }
        return k.empty();
    }
};