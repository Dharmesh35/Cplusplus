#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void InsertatHead(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertatTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
    }
    else
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void InsertatPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertatHead(head, tail, data);
        return;
    }
    int count = 1;
    Node *temp = head;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        InsertatTail(head, tail, data);
        return;
    }
    Node *nodex = new Node(data);
    nodex->next = temp->next;
    temp->next->prev = nodex;
    temp->next = nodex;
    nodex->prev = temp;
}

void DeleteHead(Node *&head)
{
    head = head->next;
    head->prev = NULL;
}

void DeleteTail(Node *&tail)
{
    tail = tail->prev;
    tail->next = NULL;
}

void DeleteatPos(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        DeleteHead(head);
        return;
    }
    int count = 1;
    Node *curr = head;
    Node *prev = NULL;
    while (count < pos)
    {
        prev=curr;
        curr = curr->next;
        count++;
    }
    if (curr->next == NULL)
    {
        DeleteTail(tail);
        return;
    }
    prev->next=curr->next;
    curr->next->prev=curr->prev;
    delete curr;
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

void size(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Length: " << count;
}

int main()
{
    Node *node1 = new Node(22);
    Node *head = node1;
    Node *tail = node1;
    print(node1);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    InsertatHead(head, tail, 14);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    InsertatTail(head, tail, 49);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    InsertatPos(head, tail, 3, 37);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    InsertatPos(head, tail, 5, 53);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    DeleteHead(head);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    DeleteTail(tail);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    DeleteatPos(head, tail, 2);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    size(head);
    return 0;
}