class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int l = 0;
        int res = 0;

        for (int r = 0; r < s.length(); r++) {

            // if character already seen inside current window
            if (mp.find(s[r]) != mp.end()) {
                l = max(l, mp[s[r]] + 1);
            }

            // update latest index
            mp[s[r]] = r;

            // update answer
            res = max(res, r - l + 1);
        }

        return res;
    }
};
