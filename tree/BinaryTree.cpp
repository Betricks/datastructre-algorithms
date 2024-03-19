#include <bits/stdc++.h>

using namespace std;




struct TreeNode{
    
    int data;
    
    TreeNode* lefty;
    TreeNode* righty;
    
    TreeNode(int value) : data(value), lefty(nullptr), righty(nullptr){}
    
    
};




class  BinaryTree{
    
    private:
        TreeNode* rootNode;
    
    public:
        BinaryTree() : rootNode(NULL){}
    
    TreeNode* insert(int value){
        
        if(rootNode == NULL){
            TreeNode* newNode = new TreeNode(value);
            rootNode = newNode;
        }
        if(rootNode->data < value){
            rootNode->righty = insert(value);
        }
        if(rootNode->data > value){
            rootNode->lefty = insert(value);
        }
        
    }
    
    
};





int main(){
    
    BinaryTree binaryTree;
    
    binaryTree.insert(5);
    binaryTree.insert(7);
    binaryTree.insert(3);
    binaryTree.insert(6);
    binaryTree.insert(1);
      
    
    return 0;
}