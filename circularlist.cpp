#include <bits/stdc++.h>
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
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed for node with data " << value << endl;
    }
};

void InsertNode(Node *&tail, int element, int data)
{
    Node *nodex = new Node(data);
    if (tail == NULL)
    {
        tail = nodex;
        nodex->next = nodex;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        nodex->next = curr->next;
        curr->next = nodex;
    }
}

void DeleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List is already empty";
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(curr==prev){
            tail=NULL;
        }
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    InsertNode(tail, 5, 3);
    print(tail);
    InsertNode(tail, 3, 7);
    print(tail);
    InsertNode(tail, 7, 11);
    print(tail);
    InsertNode(tail,7 , 8);
    print(tail);
    DeleteNode(tail,3);
    print(tail);
    return 0;
}