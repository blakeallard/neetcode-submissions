class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        const int n = (int)nums.size();

        unordered_map<int, int> diffMap;
        for (int i = 0; i < n; i++)
        {
            int difference = target - nums[i];
            if (diffMap.find(difference) != diffMap.end())
            {
                return { diffMap[difference], i };
            }
            diffMap[nums[i]] = i;
        }
    }
};