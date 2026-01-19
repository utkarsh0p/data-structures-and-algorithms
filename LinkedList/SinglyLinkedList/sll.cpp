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
        this->next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    // pushing the new node in the front
    void push_front(int value)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // to print the linked list
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ->";
            temp = temp->next;
        }
        cout << "NULL";
    }

    // pop one element from back
    void pop_back()
    {
        Node *t = head;
        while (t->next != tail)
        {
            t = t->next;
        }
        tail = t;
        tail->next = NULL;
    }

    // push one element in the back of the ll
    void push_back(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = NULL;
        }
        tail->next = newNode;
        newNode->next = NULL;
    }

    // remove one element from the front of the ll
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty";
            return;
        }
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    // this is to insert in the middle
    void insert(int value, int position)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            Node *temp = head;
            int count = 0;
            while (count < position - 1)
            {
                temp = temp->next;
                count++;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // search functionality
    void search(int value)
    {
        Node *temp = head;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->value == value)
            {
                found = true;
                break;
            }
            temp = temp->next;
        }
        if (found == true)
            cout << "Node is present";
        else
            cout << "Node is not Present";
    }
};

int main()
{
    List ll;
    ll.push_front(2);
    ll.push_front(34);
    ll.print();
    cout << endl;
    ll.search(2);
}