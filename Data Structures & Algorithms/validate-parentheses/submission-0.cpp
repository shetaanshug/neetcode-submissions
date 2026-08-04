class Solution {
public:

    bool isValid(string s) {
        
        if(s.size()%2 !=0) return false;

       stack<char>st;
        
        for (int i = 0;i<s.size();i++){

            if(s[i]=='{'||s[i]=='('||s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return false;
                else if(s[i]=='}'){
                    if(st.top()!='{') return false;
                    st.pop();
                }
                else if(s[i]==']'){
                    if(st.top()!='[') return false;
                    st.pop();
                }
                else if(s[i]==')'){
                    if(st.top()!='(') return false;
                    st.pop();
                }
            }




        }
        if(st.empty()) return true;
        return false;

    }
};
