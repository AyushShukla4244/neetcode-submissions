class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>minLeft(n);
        vector<int>maxRight(n);
        minLeft[0]=prices[0];
        for(int i=1;i<n;i++){
            minLeft[i]=min(minLeft[i-1], prices[i]);
        }
        maxRight[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            maxRight[i]=max(maxRight[i+1], prices[i]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res, maxRight[i]-minLeft[i]);
        }
        return res;
    }
};
