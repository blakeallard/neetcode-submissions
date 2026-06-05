class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> result;
        unordered_map<int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);

        for (int i : nums)
        {
            freq[i]++;
        }

        for (auto& pair : freq)
        {
            buckets[pair.second].push_back(pair.first);
        }

        for (int i = nums.size(); i >= 1; i--)
        {
            for (int num : buckets[i])
            {
                result.push_back(num);
                if (result.size() == k)
                {
                    return result;
                }
            }
        }

        return result;
    }
};
