class Solution {
public:
    string minWindow(string s, string t) {

        if(s.size()<t.size()) return "";
        if(s==t) return s;
     int left =0, right =0;
     int have=0,need=0;
    int w_len = 1001;
    int left_one = 0;
    string ans = "";
    vector<int>freq(128,0),freq1(128,0);
    for(int i=0;i<t.size();i++){
        if(freq[t[i]]==0) need++;
        freq[t[i]]++;
    }
    while(right<s.size()){

        
       freq1[s[right]]++;
       if(freq[s[right]]>0&&freq1[s[right]] == freq[s[right]]) have++;
        
        
while(have == need){
            if(right-left+1<w_len){
         w_len = min(w_len,right-left+1);
      
      left_one = left;}
        freq1[s[left]]--;
        if(freq[s[left]]>freq1[s[left]])
      { 

      have--;
      }


    left++;
}

        right++;

    }
    if(w_len ==1001) return "";
return s.substr(left_one,w_len);
    }
};
