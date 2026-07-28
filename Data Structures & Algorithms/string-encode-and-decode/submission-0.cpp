class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
    for(auto& str:strs){
       s  += to_string(str.size())+"#" +str;
    }
    cout<<s;
    return s;
    }

    vector<string> decode(string s) {
        int size;
        vector<string> output;
        for(int i = 0;i<s.size();i++){
            string num="";
            while(s[i]!='#'){
                num+=s[i];
                i++;
            }
            int size = stoi(num);

            output.push_back(s.substr(i+1,size));
            i+=size;
        }
        
return output;
    }
};
