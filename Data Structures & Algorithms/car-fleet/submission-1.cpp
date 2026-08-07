class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet=0;
        vector<double>time;
        
        vector<pair<int,int>>srt;
        for(int i=0;i<position.size();i++){
            srt.push_back({position[i],speed[i]});
        }
        sort(srt.begin(),srt.end());

        int n=position.size();
        double curr_time,last_time=0;

for(int i=0;i<n;i++){
 curr_time =(double)(target - srt[n-i-1].first)/srt[n-i-1].second;

    if(curr_time>last_time) {last_time=curr_time;
    fleet++;
    }
    

}

return fleet;

    }
};
