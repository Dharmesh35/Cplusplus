#include<bits/stdc++.h>
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
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void InsertatHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertatPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertatHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        InsertatTail(tail, data);
        return;
    }
    Node *insert = new Node(data);
    insert->next = temp->next;
    temp->next = insert;
}

void DeleteHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    // delete temp;
}

void DeleteatPos(Node *&head, int pos)
{
    if (pos == 1)
    {
        DeleteHead(head);
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        // delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(40);
    Node *head = node1;
    Node *tail = node1;
    print(node1);
    InsertatHead(head, 10);
    print(head);
    InsertatTail(tail, 70);
    print(head);
    InsertatPos(head, tail, 4, 100);
    print(head);
    DeleteHead(head);
    print(head);
    DeleteatPos(head, 3);
    print(head);
}
