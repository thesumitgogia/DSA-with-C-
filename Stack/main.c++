#include <iostream>
using namespace std;
// #include
class MinStack
{
private:
    int n, *arr, topIndex, min, min2;

public:
    MinStack() : topIndex(0), n(10), min(0)
    {
        arr = new int[n];
    }

    void push(int val)
    {
        if (topIndex == n)
        {
            cout << "stack is full!" << endl;
            return;
        }
        if (min > val)
            min = val;
        if (min < val && min2 > val)
            min2 = val;

        arr[++topIndex] = val;
    }

    void pop()
    {
        if (min == arr[topIndex])
            min = min2;
        topIndex--;
    }

    int top()
    {
        return arr[topIndex];
    }

    int getMin()
    {
        return min;
        // for(int i = 0; i < n; i++){
        //     if(arr[i] < arr[i+1]){

        //     }
        // }
    }
};

int main()
{
    MinStack stack;
    stack.push(-2);
    stack.push(0);
    stack.push(-3);
    stack.pop();
    stack.top();
    stack.getMin();
    cout << stack.getMin();
    return 0;
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */