# Populating Next Right Pointers in Each Node
==
Given a binary tree
```
    struct TreeLinkNode {
      TreeLinkNode *left;
      TreeLinkNode *right;
      TreeLinkNode *next;
    }
```
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.

Note:

 **You may only use constant extra space.**
 **You may assume that it is a perfect binary tree (ie, all leaves are at the same level, and every parent has two children).**
For example,
Given the following perfect binary tree,
```
         1
       /  \
      2    3
     / \  / \
    4  5  6  7
```
After calling your function, the tree should look like:
```
         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \  / \
    4->5->6->7 -> NULL
```

## 理解
在遍历的过程中需要一个queue，这样能保存下每一层的node. <br>
我没看见中间那个note，我还以为不是perfect binary tree. 如果看见这两条，就会有下面的方法。