class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> m;
        vector<vector<int>> buckets(nums.size() + 1);

        for (int num : nums)
        {
            m[num]++;
        }

        for (auto& p : m)
        {
            buckets[p.second].push_back(p.first);
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
