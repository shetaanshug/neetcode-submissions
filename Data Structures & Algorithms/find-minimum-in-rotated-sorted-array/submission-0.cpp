class Solution {
public:

    int findMin(vector<int> &nums) {
        int n = nums.size()-1;
        int start = 0,end = n;
        int mid=0;
        while(end>start){
             mid =  (end+start)/2;
             if(nums[mid]>nums[end]) start= mid+1;
             else end = mid;
        }
        return nums[start];
        
    }
};
