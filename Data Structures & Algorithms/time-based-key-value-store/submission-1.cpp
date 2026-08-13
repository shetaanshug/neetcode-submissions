class TimeMap {
     unordered_map<string,vector<pair<int,string>>>mp;
public:
    TimeMap() {
       
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});

    }
    
    string get(string key, int timestamp) {

        if(mp.find(key)==mp.end()) return "";

        int n = mp[key].size()-1;
        int left=0,right=n,mid=0;

        while(right>=left){
                mid = (right+left)/2;
          if( mp[key][mid].first <=timestamp) left = mid+1;
          else right = mid-1;

        }
        if(right==-1) return "";
        return mp[key][right].second;
    }
};
