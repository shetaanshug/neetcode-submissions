class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxi=0;
        int l,r,c;

        for(int i=0;i<=heights.size();i++){
              int current = (i == heights.size()) ? 0 : heights[i];

            
            while(!st.empty()&&current<heights[st.top()]){
            r = i;
c = st.top();
                 st.pop();
              l = st.empty()? -1:st.top();
 maxi = max(maxi, heights[c]*(r-l-1));



            }
     if(i<heights.size())   st.push(i);

           


        }
        return maxi;
    }
};
