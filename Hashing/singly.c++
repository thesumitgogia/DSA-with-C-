#include <iostream>
#include <string.h>
using namespace std;
struct Node
{
    int data = 0;
    Node *next = NULL;
};

class SinglyLinkedList
{
private:
    Node *start = NULL;

public:
    Node *tail = NULL;
    
    Node *head();
    // Insertion
    void insertAtStart(int data);
    void insertAtEnd(int data);
    void insertAfterNode(int node, int data);
    // Deletion
    void deleteByIndex(int key);
    void deleteByNode(Node *node);
    // Searching
    Node *searchByIndex(int key);
    int searchByNode(int);
    // Sorting
    void mergeSort(Node *node);
    // Printing
    void print();
    void printReverse();

    ~SinglyLinkedList()
    {
        delete start;
        delete tail;
    }
};

Node *SinglyLinkedList::head()
{
    return start;
}
void SinglyLinkedList::insertAtStart(int data)
{
    Node *newNode = new Node();
    if (!start)
    {
        newNode->data = data;
        newNode->next = start;
        tail = newNode;
    }
    else
    {

        newNode->data = data;
        newNode->next = start;
    }
    start = newNode;
}

void SinglyLinkedList::insertAtEnd(int data)
{

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (!start)
    {
        start = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void SinglyLinkedList::insertAfterNode(int node, int data)
{
    Node *temp = start;
    while (temp->data != node)
    {
        temp = temp->next;
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
}

Node *SinglyLinkedList::searchByIndex(int key)
{
    Node *temp = start;
    int index = 0;
    while (temp->next != NULL && index != key)
    {
        temp = temp->next;
        index = index + 1;
    }
    return temp;
}

int SinglyLinkedList::searchByNode(int node)
{
    Node *current = start;
    int index = 0;
    while (current->data != node)
    {
        current = current->next;
        index = index + 1;
    }
    return index;
}

void SinglyLinkedList::print()
{
    Node *temp = start;
    string s = "";
    while (temp->next != NULL)
    {
        s += to_string(temp->data) + " --> ";

        // cout << "The list is: " << temp->data << endl;
        temp = temp->next;
    }
    cout << s << "None" << endl;
}

void SinglyLinkedList::printReverse()
{
    Node *temp = start;
    string s = "";
    while (temp->next != NULL)
    {
        s += to_string(temp->data) + " --> ";

        // cout << "The list is: " << temp->data << endl;
        temp = temp->next;
    }
    // cout <<
    cout << s.length() << "None" << endl;
}