

// Original Code
class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
}
  
class BinarySearchTree { 

  constructor() { 
    this.root = null; 
  }

  insert(data) { 

    let newNode = new Node(data); 

    if (this.root === null) { 
      this.root = newNode; 
    } else { 

      let currentNode = this.root;

      while (true) {

        if (data < currentNode.data) {

          if (!currentNode.left) { 
            currentNode.left = newNode;   // Insert the node here and break out of loop  
            break;   // Break out of loop after insertion is done  													  
          } else {   // Go to the left node and continue the loop until a leaf node is found for insertion  
            currentNode = currentNode.left;   // Go to the left node and continue the loop until a leaf node is found for insertion  		     }    

        } else if (data > currentNode.data) {

          if (!currentNode.right) { // Insert the node here and break out of loop  
            currentNode.right = newNode; 
after insertion is done     } else {     
  // Go to the right node and continue the loop until a leaf node is found for insertion     
  currentNode = currentNode.right;     // Go to the right node and continue the loop until a leaf node is found for insertion       
  }       
  }     
  }   
  } 
  }; 
  const bst = new BinarySearchTree(); 
  bst.insert(15); 
  bst.insert(25); 
  bst.insert(10); 
  bst.insert(7); 
  bst.insert(22); 
  bst.insert(17); 
  bst.insert(13); 
  bst.insert(5); 
  bst.insert(9); 
  bst .insert(27);
  console .log('Binary Search Tree: ', JSON .stringify (bst));
  console .log            
  // Insert the node here and break out of loop    	break;     // Break out of loop 