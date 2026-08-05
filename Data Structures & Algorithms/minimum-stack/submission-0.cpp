class MinStack {
    stack<int> st,mint;
public:


    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!mint.empty()){
            mint.push(min(val,mint.top()));}
        else
            mint.push(val);
        
    }
    
    void pop() {
        st.pop();
        mint.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return mint.top();
    }
};
