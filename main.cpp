/*************************************************************
 *		
 *						Scratch for C++
 *
 ************************************************************/
	
#include <iostream>

using namespace std;

 // create binary search tree using linked list in C++
  // Original Code
struct Node { 
    int data; 
    Node *left, *right; 
}; 
  
Node* createNode(int data) { 
    Node* newNode = new Node(); 
    newNode->data = data; 
    newNode->left = NULL; 
    newNode->right = NULL; 

    return newNode; 
} 
  
Node* insert(Node* root, int data) { 

    if (root == NULL) { // Empty tree case  											// Refactored Code: Added braces around if statement body. This is for readability and to ensure that the code block is executed as intended.

        root = createNode(data);  

    } else if (data <= root->data) { // Insert in left subtree case  

        root->left = insert(root->left, data);  

    } else { // Insert in right subtree case  

        root->right = insert(root->right, data);  

    }  

    return root; // Return the updated tree with the newly inserted node.  
}

void inOrder(Node* node) {
    if (node == NULL) {
      return;
    } 
    inOrder(node->left);
    cout << node->data << ", ";
    inOrder(node->right);
}

int main() {
  
  int a = 0;
  
  int array[] = {1,3,67,9};
  
  cout << "Hello World!\n";




 Node* bPtr = new Node();
 

 createNode(12); 

 insert(bPtr, 14);
 insert(bPtr, 5);
 insert(bPtr, 97);
 insert(bPtr, 8);
 insert(bPtr, 4);

 inOrder(bPtr);

 
 

}