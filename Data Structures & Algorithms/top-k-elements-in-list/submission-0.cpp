class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;          
        }
vector<vector<int>> bucket(nums.size()+1);

for(const auto& it : mp){
    bucket[it.second].push_back(it.first);
}
vector<int> output;

for(int i=bucket.size()-1;i>=0;i--){
    for (int j = 0;j<bucket[i].size();j++){
    output.push_back(bucket[i][j]);
    if(output.size()==k)
        return output;
}}
return output;
    }
};
