#include <iostream>
using namespace std;
struct A
{
    int size;
    int length;
    int *arr;
    A(int n) : size(n)
    {
        arr = new int[size];
    }
};

class List
{
public:
    A *array;
    List(int n)
    {
        array = new A(n);
    }
    void append(int elem)
    {
        if (array->length == array->size)
            cout << "ARR IF FULL" << endl;

        for (int i = 0; i < array->length; i++)
            array->arr[i] = array->arr[i];
    }
};
int main()
{
    A array = A(5);
    array.arr[0] = 20;
    array.arr[1] = 30;
    array.arr[2] = 40;
    array.arr[3] = 50;
    array.arr[4] = 60;
    cout << array.arr[4] << endl;
    cout << array.size << endl;
    return 0;
}