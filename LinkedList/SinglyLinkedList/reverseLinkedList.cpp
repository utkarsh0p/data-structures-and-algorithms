#include <iostream>
using namespace std;
class Node
{

public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void print()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->value << " --> ";
            temp = temp->next;
        }
        cout << "NULL";
    }

    void reverse()
    {
        Node *previous = NULL;
        Node *current = head;
        Node *after = NULL;

        while (current != NULL)
        {
            after = current->next;    // save next
            current->next = previous; // reverse link
            previous = current;       // move previous
            current = after;          // move current
        }

        head = previous; // new head
    }
};

int main()
{
    List list;
    list.push_front(3);
    list.push_front(4);
    list.push_front(21);

    list.print();
    list.reverse();
    cout << endl;
    list.print();
}