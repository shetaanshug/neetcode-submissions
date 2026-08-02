class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        vector<int>lastSeen(128,-1);
        int max_length=0;
        int left=0,right =0;

        while(right<s.size()){

            if(lastSeen[s[right]]!=-1){
                left = max(left,lastSeen[s[right]]+1);
            }
            lastSeen[s[right]] = right;
            
            max_length = max(max_length,right - left +1);
            right++;

        }
        return max_length;
    }
};
