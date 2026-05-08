class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(auto s: strs){
            encoded+=to_string(s.length())+'#'+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>res;
        for (int i = 0; i < s.length(); i++) {
            string length = "";

            while (i < s.length() && s[i] != '#') {
                length += s[i];
                i++;
            }

            int len = stoi(length);
            res.push_back(s.substr(i + 1, len));
            i = i + len;
        }

        return res;
    }
};
