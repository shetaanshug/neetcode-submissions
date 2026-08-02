class Solution {
public:
    int characterReplacement(string s, int k) {

      int left = 0,right=0;
    
    int ans=0;
int max_frequency =0;
vector<int>freq(26,0);
while(right<s.size()){

freq[s[right]-'A']++;
max_frequency = max(max_frequency, freq[s[right]-'A']);

while(right-left+1 - max_frequency >k){
    
    freq[s[left]-'A']--;
    left++;

}
ans = max(ans,right-left+1);
right++;



}
return ans;

    }
};
