#include <iostream>
#include <string>
#include "singly.c++"
using namespace std;

class HashMap
{
public:
    int arr[10];
    void set(int age, string key)
    {
        int index = 0;
        for (int i = 0; i < key.length(); i++)
        {
            index += (int)key[i];
        }
        index = index % 10;
        int pre_value = arr[index];
        if (arr[index] != 0)
        {

            // SinglyLinkedList sll = SinglyLinkedList();
            // sll.insertAtStart(pre_value);
            // sll.insertAtStart(age);
            // int ar[] = {pre_value, age};
            arr[index] = age;
        }
        else
        {
            arr[index] = age;
        }
    }

    void get(string key)
    {
        int index = 0;
        for (int i = 0; i < key.length(); i++)
        {
            index += (int)key[i];
        }
        index = index % 10;
        cout << arr[index];
    }
};
int main()
{
    HashMap map = HashMap();
    map.set(30, "Sumit");
    map.set(40, "Urnit");
    map.get("Sumit");
    return 0;
}
