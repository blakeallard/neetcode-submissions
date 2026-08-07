class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set<int> mySet;
        const int n = (int)nums.size();

        for (int i = 0; i < n; i++)
        {
            if (mySet.find(nums[i]) != mySet.end(nums[i]))
            {
                return true;
            }
            mySet.insert(nums[i]);

        }

        return false;
    }
};