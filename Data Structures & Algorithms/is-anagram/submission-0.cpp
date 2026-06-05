class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> s_freq;
        unordered_map<char, int> t_freq;

        for (char c : s)
        {
            s_freq[c]++;
        }

        for (char c : t)
        {
            t_freq[c]++;
        }

        for (auto& p : s)
        {
            if (s_freq[p] != t_freq[p])
            {
                return false;
            }
        }
        return true;
    }
};
