class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            if (freq[t[i]] == 0) {
                return false;
            }
            freq[t[i]]--;
        }

        return true;
    }
};
