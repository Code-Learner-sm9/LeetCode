//https://leetcode.com/problems/implement-stack-using-queues/description/
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> newq;
        int last;
        while(!q.empty())
        {
            int k = q.front();
            q.pop();
            if(q.empty())
            {
                last = k;
                break;
            }
            newq.push(k);
        }
        q = newq;
        return last;
    }
    
    int top() {
        queue<int> newq;
        int last;
        while(!q.empty())
        {
            int k = q.front();
            q.pop();
            if(q.empty())
            {
                //last element
                last = k;
                
            }
            newq.push(k);
        }
        q = newq;
        return last;
    }
    
    bool empty() {
        return q.empty();
    }
};
