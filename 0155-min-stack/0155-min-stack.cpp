class MinStack {
public:
    stack<int>st;
    stack<int>minget;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minget.empty() || minget.top()>=val) minget.push(val);
    }
    
    void pop() {
        if(st.top() == minget.top()) minget.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minget.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */