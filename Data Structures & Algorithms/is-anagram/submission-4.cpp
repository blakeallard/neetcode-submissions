class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
        {
            return false;
        }

        const int n = (int)s.length();
        const int m = (int)t.length();
        unordered_map<char, int> myMap;


        for (int i = 0; i < n; i++)
        {
            myMap[s[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            myMap[t[i]]--;
        }
        for (const auto& pair : myMap)
        {
            if (pair.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
