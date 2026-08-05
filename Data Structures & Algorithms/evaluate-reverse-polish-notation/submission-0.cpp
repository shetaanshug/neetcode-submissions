class Solution {
public:

    int rpn_help(int a,int b,string c){
        if(c == "+") return a+b;
        else if(c == "-") return a - b;
        else if(c == "/") return a/b;
        else return a*b;
    }
    int evalRPN(vector<string>& tokens) {
        
        if(tokens.size()==1) return stoi(tokens[0]);

        stack<int>st;
        int a,b;

        for(int i=0;i<tokens.size();i++){

           if(tokens[i]!="+"&&tokens[i]!="/"&&tokens[i]!="-"&&tokens[i]!="*")
                st.push(stoi(tokens[i]));
            else{
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                    st.push(rpn_help(a,b,tokens[i]));
            }
           


        }
        return st.top();



    }
};
