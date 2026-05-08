class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1;
        int maxArea=0;
        while(i<j){
            int newArea=min(heights[i], heights[j])*(j-i);
            maxArea=max(maxArea, newArea);

            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};
