#include<iostream>
#include<queue>
using namespace std;
class Node{
  public:
    int value;
    Node* left, *right;
    Node(int value){
      this -> value = value;
      left = nullptr;
      right = nullptr;
    }
};

Node* binaryTree() {
  int a;
  cin>> a;
  if( a == -1){
    return nullptr;
  }

  Node* node = new Node(a);
  cout << "This is left of " << a << "of the tree ";
  cout << endl;
  node->left = binaryTree();
  cout << "This is right of " << a << "the tree ";
  cout << endl;
  node->right = binaryTree();
  return node;
}

void levelOrderTraversal (Node* root){
  queue<Node*>q;
  q.push(root);
  while(! q.empty() ){
    Node* curr = q.front();
    cout << curr->value << " ";
    q.pop();
    if(curr->left)
    q.push(curr->left);
    if(curr->right)
    q.push(curr->right);
  }
}

int main(){
  Node* root = binaryTree();
  levelOrderTraversal(root);
}

