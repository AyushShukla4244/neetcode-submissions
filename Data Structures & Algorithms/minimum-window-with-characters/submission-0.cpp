class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>countT;
        for(auto c: t){
            countT[c]++;
        }

        unordered_map<char, int>window;
        int have=0;
        int need=countT.size();

        pair<int, int>res={-1, -1};
        int resLen= INT_MAX;

        int l=0;
        for(int r=0;r<s.length(); r++){
            window[s[r]]++;

            if(countT.count(s[r]) && countT[s[r]]==window[s[r]]){
                have++;    
            }
            while(have==need){
                if((r-l+1)< resLen){
                    resLen=r-l+1;
                    res={l, r};
                }
                window[s[l]]--;
                if(countT.count(s[l]) && window[s[l]] < countT[s[l]]){
                    have--;
                }
                l++;

            }

        }
        return resLen == INT_MAX ? "": s.substr(res.first, resLen);
    }
};
