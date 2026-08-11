class Solution {
public:

    int checkbanana(vector<int>& piles,int k){
        int h = 0;
        for(auto pile :piles) h+=(pile + k - 1) / k;
   return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxi=0,mini=1;

        for(auto pile:piles){
            maxi = max(maxi,pile);
           
        }
        int ans= 0;
   int mid =0;
            while(maxi>=mini){

                 mid = (maxi+mini)/2;

             if(checkbanana(piles,mid)<=h){
                  ans=mid;
                    maxi = mid-1;
                }
                else mini = mid+1;
            }


       return ans; 

    }
};
