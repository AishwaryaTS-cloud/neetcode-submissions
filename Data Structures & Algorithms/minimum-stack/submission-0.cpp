class MinStack {
private:
    stack<int> st;
    stack<int>minSt;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(minSt.empty())
            minSt.push(val);
        else
            minSt.push(min(val , minSt.top()));
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        int x = st.top();
        return x;
    }
    
    int getMin() {
        int y = minSt.top();
        return y;
    }
};
