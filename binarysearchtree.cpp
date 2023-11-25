#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node* buildBST(Node *root, int data) {
    if (!root) {
        return new Node(data);
    }
    if (data > root->data) {
        root->right = buildBST(root->right, data);
    } else {
        root->left = buildBST(root->left, data);
    }
    return root;
}

Node* takeinput(Node* root) {
    int data = 0;
    cin >> data;
    while (data != -1) {
        root = buildBST(root, data);
        cin >> data;
    }
    return root;
}

void levelOrder(Node *root) {
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) {
        Node *temp = q.front(); 
        q.pop();

        if (temp == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    Node* root = nullptr;
    // 10 8 21 7 28 5 4 3 -1
    cout << "Enter the data:" << endl;
    root = takeinput(root);
    levelOrder(root);

    return 0;
}
