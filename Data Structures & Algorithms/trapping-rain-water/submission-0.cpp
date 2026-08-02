class Solution {
public:
    int trap(vector<int>& height) {
        
        int water_stored = 0;
        int left = 0,right = height.size()-1;
        int left_max = height[left],right_max = height[right];

        while(left<right){
            
            if(left_max<right_max){

                left++;

                if(height[left]>left_max)
                    left_max = height[left];
                else
                    water_stored += left_max - height[left];

            }
            else{
                    right--;
                    if(height[right]>right_max)
                        right_max = height[right];
                    else
                        water_stored += right_max - height[right];

            }
           

        }
 return water_stored;

        
    }
};
