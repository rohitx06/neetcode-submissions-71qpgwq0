class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> pool;
    for (int i = 0; i< nums.size(); i++)
    {
        if (pool.count(nums[i]))
        {
            return true;
        }
        pool.insert(nums[i]);
    }
    return false;
    }
};