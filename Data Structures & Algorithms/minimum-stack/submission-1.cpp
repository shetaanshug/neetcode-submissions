class MinStack {
    stack<int> st,mint;
public:


    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!mint.empty() && val<=mint.top()){
            mint.push(val);
            }
        else if(mint.empty())
            mint.push(val);
        
    }
    
    void pop() {
        
        if(st.top()==mint.top())
             mint.pop();
     st.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return mint.top();
    }
};
