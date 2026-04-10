class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        unordered_map<string,vector<string>> pool;
        for(int i=0;i<strs.size();i++){
            string base = strs[i];
            sort(base.begin(),base.end());
            pool[base].push_back(strs[i]);
        }
        
        for(auto& pair : pool){
            res.push_back(pair.second);
        }

        return res;


        

    }
};
