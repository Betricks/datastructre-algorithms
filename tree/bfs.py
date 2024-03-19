#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Sep 25 13:36:30 2023

@author: betrick
"""

# (BFS) Breadth First Search <> Level Wise traversal

from typing import Any
import queue



""" TreeNode stores node values and left, right node pointers
"""
class TreeNode:
    
    def __init__(self, values: Any) -> None:
        self.left: TreeNode = None
        self.data: Any = values
        self.right: TreeNode = None



class Tree:
    
    def __init__(self) -> None:
        self.root: TreeNode = None
        
    def insert(self, data: Any) -> None:
        
        if self.root == None:
            Node: TreeNode = TreeNode(data)
            self.root = Node
            print('inserted in root side')
        else:
            return self._insert(self.root, data)
    
    
    def _insert(self, root: TreeNode, data: Any) -> None:
        
        if root.data > data:
            if root.left == None:
                root.data = data
                print("inserted in left side")
                
            else:
                return self._insert(root.left, data)
        
        if root.data < data:
            if root.right == None:
                root.data = data
                print("inserted in right side")
                
            else:
                return self._insert(root.right, data)
            
        
    """ (Bfs) Breadth First Search this is not searching specific value but
        Traversing all the value in the Tree
    """
    #def Bfs(self) -> None:
        #q:queue = queue()
        
        
            
                
            
            
            
def main() -> None:
    tree: Tree = Tree()
    tree.insert(12)
    tree.insert(1)
    tree.insert(14)
    tree.insert(19)
    
    
    print(help(queue))
    print(dir(queue))




if __name__ == "__main__":
    main()
                
        
        
        