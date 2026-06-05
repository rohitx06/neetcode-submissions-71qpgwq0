class Solution {
   public:
    bool isalpha(char c) {
        return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            while (start < end && !isalpha(s[start])) {
                start++;
            }
            while (end > start && !isalpha(s[end])) {
                end--;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
