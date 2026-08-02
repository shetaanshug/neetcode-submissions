class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size()<=1) return s.size();
        unordered_set<char>set;
        int left =0,right =0;
        int maxi=0;
        while(right<s.size()){

            
            while(set.count(s[right])){
                    set.erase(s[left]);
                    left++;
            }
            maxi = max(maxi,right-left+1);
        set.insert(s[right]);
        right++;
        }
        return maxi;
        

    }
};
