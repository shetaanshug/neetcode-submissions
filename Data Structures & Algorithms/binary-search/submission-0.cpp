class Solution {
public:

    int bs(int start,int end, int target,vector<int>& nums){
        if(start>end) return -1;
     int   mid = (start+end)/2;
        if(target == nums[mid]) return mid;
        else if(target>nums[mid]) return bs(mid+1,end,target,nums);
        else if(target<nums[mid]) return bs(start,mid-1,target,nums);
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
       
       return bs(0,nums.size()-1,target,nums);


    }
};
