#include <iostream>
#include <stack>                                    
using namespace std;

class Queue {                                    
    stack<int> s1;                                
    stack<int> s2;
public:
    void push(int x) {                           
        s1.push(x);
    }
    int pop() {
        int val = peek();  
        s2.pop();
        return val;
    }
    bool empty() {
        if (s1.empty() && s2.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
    int peek() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty";
            return 0;
        }
        if (s2.empty()) {
            while (s1.empty() == false) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
};

int main() {
    Queue ob;
    ob.push(1);
    ob.push(2);
    cout << ob.peek() << endl;
    cout << ob.pop()<<endl;
    cout<<ob.empty();
    return 0;
}
