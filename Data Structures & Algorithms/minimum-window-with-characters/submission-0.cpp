class Solution {
   public:
    bool conditionsahi(vector<int>& a, vector<int>& b) {
        for (int i = 0; i < 256; i++) {
            if (a[i] < b[i]) {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        vector<int> needed(256, 0);
        vector<int> having(256, 0);
        for (char c : t) {
            needed[c]++;
        }

        int low = 0, high = 0;
        int start = 0;
        int res = INT_MAX;
        for (high = 0; high < s.size(); high++) {
            having[s[high]]++;
            while (conditionsahi(having, needed)) {
                int len = high - low + 1;
                if (res > len) {
                    res = len;
                    start = low;
                }
                having[s[low]]--;
                low++;
            }
        }
        return res == INT_MAX ? "" : s.substr(start, res);
    }
};
