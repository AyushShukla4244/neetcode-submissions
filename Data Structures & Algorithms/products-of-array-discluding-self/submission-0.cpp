class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> preMultiplication(nums.size(), 1);
        vector<int> postMultiplication(nums.size(), 1);
        int preValue=1;
        int postValue=1;
        for(int i=1;i<nums.size();i++){
            preValue*=nums[i-1];
            preMultiplication[i]=preValue;
        }
        for(int i=nums.size()-2;i>=0;i--){
            postValue*=nums[i+1];
            postMultiplication[i]=postValue;
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            res.push_back(preMultiplication[i]*postMultiplication[i]);
        }
        return res;

    }
};
