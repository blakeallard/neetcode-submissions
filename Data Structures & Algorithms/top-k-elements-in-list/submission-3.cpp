class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> result;
        unordered_map<int, int> m;
        vector<vector<int>> bucket(nums.size() + 1);

        for (int num : nums)
        {
            m[num]++;
        }

        for (auto& p : m)
        {
            bucket[p.second].push_back(p.first);
        }

        for (int i = nums.size(); i >= 1; i--)
        {
            for (int num : bucket[i])
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
