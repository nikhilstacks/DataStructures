#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    Node *head;
    Node *node1 = new Node(1);
    head = node1;

    Node *node2 = new Node(2);
    node1->next = node2;

    Node *node3 = new Node(3);
    node2->next = node3;

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}