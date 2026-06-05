class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int n = nums.size();

        unordered_set<int> twoOrMore;

        for (int num : nums)
        {
            if (twoOrMore.count(num))
            {
                return true;
            }
            twoOrMore.insert(num);
        }
        return false;
    }
};