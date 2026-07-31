class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0, j=heights.size()-1 ;
        int max_container=0;
        while(i<j){
            max_container = max(min(heights[i],heights[j]) *(j-i),max_container);

        if(heights[i]<heights[j]) i++;
        else j--;
        }

return max_container;
    }
};
