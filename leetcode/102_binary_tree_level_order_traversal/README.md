# Binary Tree Level Order Traversal
==
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level). <br>

For example:<br>
Given binary tree {3,9,20,#,#,15,7},
```
    3
   / \
  9  20
    /  \
   15   7
```
return its level order traversal as:
```
[
  [3],
  [9,20],
  [15,7]
]
```
## 理解
就是bfs(Breadth-First Search)