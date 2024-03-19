#include <bits/stdc++.h>

using namespace std;


struct Node{

    Node* left;
    int data;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr){}

};


class BinarysearchTree{

    Node* root;
    public:
        BinarysearchTree() : root(nullptr){}

        void insert(int value){
            if(root == NULL){
                Node* newNode = new Node(value);
            }else{
                Node* newNode = new Node(value);
                return insert(newNode, root);
            }
        }





    private:

        void insert(Node* newNode, Node* root){
            if(newNode->data >= root->data){
                if(root->right != NULL){
                return insert(newNode, root->right);
                }
            }
            if(root->right == NULL){
                root->right = newNode;
                cout << "inserted in the right subtree" << endl;
            }
            if(newNode->data < root->data){
                if(root->left != NULL){
                return insert(newNode, root->left);
                }
            }
            if(root->left == NULL){
                root->left = newNode;
                cout << "inserted in the left subtree" << endl;
            }
        }


};




int main(){

    BinarysearchTree binarysearchtree;

    binarysearchtree.insert(6);
    binarysearchtree.insert(3);
    binarysearchtree.insert(12);
    binarysearchtree.insert(1);
    binarysearchtree.insert(4);
    binarysearchtree.insert(8);


    return 0;
}