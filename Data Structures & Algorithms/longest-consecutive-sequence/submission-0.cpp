class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
      unordered_set<int>set;
    
      for(auto num :nums){
        set.insert(num);
      }
      
      int length = 1;
      for(auto num: set){
        int key = num;
        int current_length = 1;
        if(set.count(key-1)) continue;

        else{
            while(set.count(key+1)){
                current_length++;
                key++;
            }
            length = max(length,current_length);
        }
      }
      return length;

    }
};
