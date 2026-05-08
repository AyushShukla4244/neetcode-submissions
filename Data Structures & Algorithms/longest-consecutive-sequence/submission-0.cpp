class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin(), nums.end());
        int longestSeq=0;

        for(int num:numSet){
            int length=0;
            if(numSet.count(num-1)==0){
                length=1;
                while(numSet.count(num+length)){
                    length++;
                }
            }
            longestSeq=max(longestSeq, length);
        }
        return longestSeq;
    }
};
