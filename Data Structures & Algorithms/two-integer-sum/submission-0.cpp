class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int> mp;
for(int i=0;i<nums.size();i++){
    int complacent = target - nums[i];
    if(mp.count(complacent)){
        return {mp[complacent],i};
    }
    mp[nums[i]]=i;
}
return {};
    }
};
