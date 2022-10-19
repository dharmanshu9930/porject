#include <iostream>
#include <stack>
using namespace std;
class Myqueue
{
    stack<int> s1;
    stack<int> s2;

public:
    Myqueue()
    {
        // This is the default constructor
    }
    void push(int x)
    {
        cout << "Stack s1" << endl;
        while (!s1.empty())
        {
            cout << s1.top() << endl;
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        cout << "Stack s2" << endl;
        while (!s2.empty())
        {
            // cout << "Inside pop s2" << endl;
            cout << s2.top() << endl;
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop()
    {

        auto ele = s1.top();
        s1.pop();
        return ele;
    }
};
int main()
{
    Myqueue q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    return 0;
}