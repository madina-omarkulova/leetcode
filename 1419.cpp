int minNumberOfFrogs(string croakOfFrogs) {
        char ch[5] = { 'c', 'r', 'o', 'a', 'k' };
        map<char, int> m;
        int temp = 0, ans = 0;
        for (auto& c : croakOfFrogs) {
            m[c]++;
            int maxI = m[ch[0]];
            for (int i = 0; i < 5; i++) {
                if (maxI < m[ch[i]] || m[ch[i]] < 0) {
                    return -1;
                }
                maxI = m[ch[i]];
            }
            if (c == 'c') {
                temp++;
            }
            else if (c == 'k') {
                temp--;
            }
            ans = max(ans, temp);
        }
        for (int i = 1; i < 5; i++) {
            if (m[ch[0]] != m[ch[i]])
                return -1;
        }
        return ans;
    }