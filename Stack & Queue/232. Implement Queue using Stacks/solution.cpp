//https://leetcode.com/problems/implement-queue-using-stacks/description/
class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> newst;
        int last;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty())
            {
                last = k;
                break;
            }
            newst.push(k);
        }
        while(!newst.empty())
        {
            st.push(newst.top());
            newst.pop();
        }
        return last;
    }
    
    int peek() {
        stack<int> newst;
        int last;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty())
            {
                last = k;
                
            }
            newst.push(k);
        }
        while(!newst.empty())
        {
            st.push(newst.top());
            newst.pop();
        }
        return last;
    }
    
    bool empty() {
        return st.empty();
    }
};