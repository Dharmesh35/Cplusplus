#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

Node *buildtree(Node *root)
{
    int data;
    cout << "Enter the value:" << endl;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    root = new Node(data);
    cout << "For the left of " << data << ", ";
    root->left = buildtree(root->left);
    cout << "For the right of " << data << ", ";
    root->right = buildtree(root->right);
    return root;
}

void buildleveltree(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter the value:" << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int leftVal = 0, rightVal = 0;
        cout << "Enter value for left of " << temp->data << endl;
        cin >> leftVal;
        if (leftVal != -1)
        {
            temp->left = new Node(leftVal);
            q.push(temp->left);
        }
        cout << "Enter value for right of " << temp->data << endl;
        cin >> rightVal;
        if (rightVal != -1)
        {
            temp->right = new Node(rightVal);
            q.push(temp->right);
        }
    }
}

void morrisTraversal(Node*& root){
    Node* curr=root;
    while(curr){
        if(curr->left){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            Node* prev=curr->left;
            while(prev->right && prev->right!=curr){
                prev=prev->right;
            }
            if(prev->right==nullptr){
                prev->right=curr;
                curr=curr->left;
            }
            else{
                prev->right=nullptr;
                cout<<curr->data<<" ";
                curr=curr->right;
            }
        }
    }    
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(Node *root)
{
    stack<Node *> s;
    Node *temp = root;
    while (temp != nullptr || !s.empty())
    {
        while (temp != nullptr)
        {
            s.push(temp);
            temp = temp->left;
        }
        temp = s.top();
        s.pop();
        cout << temp->data << " ";
        temp = temp->right;
    }
}

void preOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = nullptr;
    root = buildtree(root);
    // buildleveltree(root);
    // 9 5 -1 4 -1 -1 8 4 -1 -1 6 -1 -1 4 2 -1 7 -1 -1 3 -1 -1
    // 3 5 -1 4 -1 -1 8 4 -1 -1 7 -1 -1
    levelOrder(root);
    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    return 0;
}
