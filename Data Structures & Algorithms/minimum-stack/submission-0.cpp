class MinStack {
    vector<int> data;
    stack<int> minStack;
    int mini=INT_MAX;
public:
    MinStack() {
    }
    
    void push(int val) {
        data.push_back(val);
        if(val < mini)
        mini=val;
        if (minStack.empty()) minStack.push(val);
        else minStack.push(min(val, minStack.top()));
    }
    
    void pop() {
        data.pop_back();
        minStack.pop();
    }
    
    int top() {
        return data.back();
    }
    
    int getMin() {
        return minStack.top();
    }
};
