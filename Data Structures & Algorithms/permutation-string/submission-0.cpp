class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size()<s1.size()) return false;
        int left=0,right =0;
        vector<int>freq1(26,0);
vector<int>freq2(26,0);
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
           
        }
        while(right<s2.size()){


            freq2[s2[right]-'a']++;    
                     if(right-left+1>s1.size()){
                
                freq2[s2[left]-'a']--;
                
                left++;

            }
            if(freq1==freq2) return true;
            


            right++;
        }

return false;
    }
};
