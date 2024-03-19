import 'dart:collection' show Queue;

class Node{
  
  dynamic left;
  var data;
  dynamic right;

  Node(int data){
    this.left = Null;
    this.data = data;
    this.right = Null;
  }

}



class Binarytree{
  
  dynamic root;

  Binarytree(){
    this.root = Null;
  }

  void insert(int value){
    if(root == Null){
      Node newNode = new Node(value);
      root = newNode;
      print("root node is created");
    }else{
      Node newNode = new Node(value);
      return _insert(newNode, root);
    }
  }

  void _insert(Node newNode, Node root){
      //checking if the new Node data is Greater than root data
      if(newNode.data > root.data){
        if(root.right != Null){
        return _insert(newNode, root.right);
        }
      }
      if(root.right == Null){
        root.right = newNode;
        print("new Node is being inserted to the right subtree");
      }

      //Going to the left of the root
      if(newNode.data < root.data){
        if(root.left != Null){
        return _insert(newNode, root.right);
        }
      }
      if(root.left == Null){
        root.left = newNode;
        print("new Node is being inserted to the left subtree");

      }
  }

  bool search(int target){
    if(target == root.data){
      return true;
    }else{
      return _search(target, root);
    }
  }

  bool _search(int target, Node root){
    //checking if the value is equal to current Node 
    if(root.data == target){
      return true;
    }
    //searching at the right subtrees of the tree 
    if(target > root.data){
      if(root.right != Null){
        return _search(target, root.right);
      }
    }
    //searching at the left subtrees of th tree
    if(target < root.data){
      if(root.left != Null){
        return _search(target, root.left);
      }
    }
    
     return false;
    
    
  }

  void BreadthFirstSearch(){
    bfs(root);
  }

  void bfs(Node root){
        Queue queues = Queue();
        if(root != Null) queues.addLast(root);
        int level = 0;
        while(queues.length > 0){
          print("Level ${level}");
          for(int i = 0; i<= queues.length; i++){
            Node curr = queues.removeFirst();
            print(curr.data);
            if(curr.left != Null) queues.addLast(curr.left);
            if(curr.right != Null) queues.addLast(curr.right);
          }
          level += 1;
        }
  }

  


}






void main(){
  Binarytree binarytrees = new Binarytree();
  binarytrees.insert(10);
  binarytrees.insert(12);
  binarytrees.insert(4);
  binarytrees.insert(11);
  binarytrees.insert(6);
  binarytrees.insert(1);
  binarytrees.BreadthFirstSearch();
  
  
}