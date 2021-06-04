class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int t = 0, na = a.size() - 1, nb = b.size() - 1;
        while (na >= 0 || nb >= 0 || t == 1){
            t += ((na >= 0)? a[na] - '0': 0);
            t += ((nb >= 0)? b[nb] - '0': 0);
            result = char(t % 2 + '0') + result;
            t /= 2;
            na--; 
            nb--;
        }
        return result;
    }
};