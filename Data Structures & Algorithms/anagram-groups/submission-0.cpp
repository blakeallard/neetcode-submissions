class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        using vvstring = vector<vector<string>>;
        using vstring = vector<string>;

        vvstring result;

        unordered_map<string, vstring> m;

        for (auto& s : strs)
        {
            string key = s;
            sort(key.begin(), key.end());
            m[key].push_back(s);
        }

        for (auto& p : m)
        {
            result.push_back(p.second);
        }

        return result;        
    }
};
