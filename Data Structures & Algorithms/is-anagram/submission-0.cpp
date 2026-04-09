class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> first;
        unordered_map<char, int> second;

        if (s.size() != t.size())
            return false;

        for (auto i : s)
        {
            first[i]++;
        }

        for (auto i : t)
        {
            second[i]++;
        }

        if(first==second){
            return true;
        }
        return false;
    }
};