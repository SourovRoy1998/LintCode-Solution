//https://www.lintcode.com/problem/implement-queue-by-two-stacks/description

class MyQueue {
public:
    stack <int> st1;
    stack <int> st2;
    
    MyQueue() {
        // do intialization if necessary
        
    }

    /*
     * @param element: An integer
     * @return: nothing
     */
    void push(int element) {
        // write your code here
        st1.push(element);
    }

    /*
     * @return: An integer
     */
    int pop() {
        // write your code here
        if(st2.empty())
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        if(st2.empty())
            return -1;
        int x=st2.top();
        st2.pop();
        return x;
    }

    /*
     * @return: An integer
     */
    int top() {
        // write your code here
        if(st2.empty())
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        if(st2.empty())
            return -1;
        return st2.top();
    }
};
