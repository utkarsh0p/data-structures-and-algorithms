#include<iostream>
using namespace std;
class Node{
  public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
      this->value = value;
      this->left = NULL;
      this->right = NULL;
    }
};

Node* insert(Node* node, int data){
  if( !node ) return new Node(data);
  if( data < node->value) node->left = insert( node-> left, data);
  else node->right = insert(node->right , data);
  return node;
}


int main(){
  Node* node = NULL;
  int a; 
  cin >> a;
  while ( a != -1){
    node = insert(node, a);
    cin >> a;
  }
}
