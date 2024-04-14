#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* InsertNodeintoBST(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = InsertNodeintoBST(root->right, data);
    }
    else
    {
        root->left = InsertNodeintoBST(root->left, data);
    }
    return root;
}

void takeinput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        InsertNodeintoBST(root, data);
        cin >> data;
    }
}

void levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
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

int main()
{
    Node *root = NULL;
    cout << "Enter BST nodes (enter -1 to stop): ";
    takeinput(root);
    cout << "Level Order Traversal: ";
    levelordertraversal(root);

    return 0;
}
