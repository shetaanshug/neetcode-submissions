class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
vector<int>output(nums.size(),1);
int suffix = 1;
for(int i=1;i<nums.size();i++){
    output[i] = nums[i-1]*output[i-1];
}
for(int i=nums.size()-1;i>=0;i--){
    output[i]=suffix *output[i];
    suffix*=nums[i];
}
return output;
    }
};
