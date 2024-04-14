#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
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

Node* insertIntoBST(Node* root, int d) {
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

Node* minVal(Node* root) {
    Node* temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

Node* deleteNode(Node* root, int val) {
    if (root == NULL) {
        return root;
    }
    if (root->data == val) {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        if (root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if (root->left != NULL && root->right != NULL) {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right, mini);
            return root;
        }

        if (root->left == NULL && root->right != NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
    }

    if (root->data > val) {
        root->left = deleteNode(root->left, val);
        return root;
    }

    root->right = deleteNode(root->right, val);
    return root;
}

void takeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main() {
    Node* root = NULL;

    cout << "Enter BST nodes (enter -1 to stop): ";
    takeInput(root);

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    cout << "min value is " << minVal(root)->data << endl;

    int valueToDelete;
    cout << "Enter a value to delete: ";
    cin >> valueToDelete;

    root = deleteNode(root, valueToDelete);

    cout << "Level Order Traversal after deletion: ";
    levelOrderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal after deletion: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal after deletion: ";
    postorder(root);
    cout << endl;

    cout << "min value is " << minVal(root)->data << endl;

    return 0;
}
