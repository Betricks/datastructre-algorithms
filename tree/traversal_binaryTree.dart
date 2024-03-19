class Node{

  dynamic left;
  int data;
  dynamic right;

  Node(this.data);

}


class BinarySearchTree{
  dynamic root;
  
  void insert(int value){
    if(root == null){
      Node newNode = new Node(value);
      root = newNode;
    }else{
      return _insert(root, value);
    }
  }

  void _insert(Node root, int value){
      if(value > root.data){
        if(root.right == null){
          root.right.data = value;
          print('inserted right side');
        }else{
          return _insert(root.right, value);
        }
      }else{
        if(root.left == null){
          root.left.data = value;
          print('inserted left side');
        }else{
          return _insert(root.left, value);
        }
      }
  }


}

void main(){

  BinarySearchTree binarysearchtree = new BinarySearchTree();

  binarysearchtree.insert(1);
  binarysearchtree.insert(2);
  binarysearchtree.insert(3);
  binarysearchtree.insert(9);

}