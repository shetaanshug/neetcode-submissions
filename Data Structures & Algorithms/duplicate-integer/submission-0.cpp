class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate_check;

        for(int num : nums){
            if(duplicate_check.count(num)){
                return true;
            }
            duplicate_check.insert(num);
        
        }
        return false;
    }
};