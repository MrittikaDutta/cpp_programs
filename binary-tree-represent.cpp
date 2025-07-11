#include <iostream> // For input and output operations
#include <vector>   // For using vectors
#include <stack>    // For using stacks
#include <queue>    // For using queues
#include <algorithm> // For using algorithms like sort, find, etc.
#include <cmath>    // For mathematical operations and functions
#include <string>   // For string operations
#include <map>      // For using maps
#include <set>      // For using sets
#include <iomanip>  // For input/output manipulations
using namespace std;
struct node{
    int data;
    struct node* r;
    struct node* l;
    node(int val){
        data=val;
        l=r=NULL;
    }
};
node* insertNode(node* root, int data) {
    if (root == nullptr) {
        return new node(data);
    } else {
        if (data <= root->data) {
            root->l = insertNode(root->l, data);
        } else {
            root->r = insertNode(root->r, data);
        }
        return root;
    }
}
node* buildBinaryTree() {
    node* root = nullptr;
    int numNodes;

    std::cout << "Enter the number of nodes in the binary tree: ";
    std::cin >> numNodes;

    std::cout << "Enter the values of the nodes:\n";
    for (int i = 0; i < numNodes; ++i) {
        int data;
        std::cout << "Node " << (i + 1) << ": ";
        std::cin >> data;
        root = insertNode(root, data);
    }

    return root;
}
void inorderTraversal(node* root) {
    if (root != nullptr) {
        inorderTraversal(root->l);
        std::cout << root->data << " ";
        inorderTraversal(root->r);
    }
}
int main(){
    int a;
    node* root = buildBinaryTree();

    std::cout << "Inorder Traversal of the Binary Tree: ";
    inorderTraversal(root);
    std::cout << std::endl;
    delete root;
    return 0;
}