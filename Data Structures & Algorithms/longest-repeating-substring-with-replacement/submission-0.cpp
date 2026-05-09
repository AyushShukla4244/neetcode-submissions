class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        unordered_map<int, int>mp;
        int l=0, maxF=0;
        for(int r=0;r<s.length();r++){
            mp[s[r]]++;
            maxF=max(maxF, mp[s[r]]);

            while((r-l+1)- maxF> k){
                mp[s[l]]--;
                l++;
            }
            res=max(res, r-l+1);
        }

        return res;
    }
};
