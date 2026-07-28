class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto str : strs){
            int freq[26] = {0};
            for(auto s :str){
                freq[s - 'a']++;
            }
            string key ="";
            for(int i=0;i<26;i++)
                key += "#"+ to_string(freq[i]);
        mp[key].push_back(str);
        }
        vector<vector<string>> output;
        for(const auto &it :mp){
            output.push_back(it.second);
        }
        return output;
    }
};
