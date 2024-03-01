#include <iostream>
using namespace std;
class Stack
{
private:
    int top = -1, size = 0, *arr;

public:
    Stack(int n) : size(n)
    {
        arr = new int[n];
    }
    void push(int data)
    {
        if (top == size)
        {
            cout << "Stack overflow:" << endl;
            return;
        }
        arr[++top] = data;
    }
    void pop()
    {
        --top;
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }
    bool empty()
    {
        if (top < 0)
            return true;
    }
};