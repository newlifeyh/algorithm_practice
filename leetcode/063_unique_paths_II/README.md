# Unique Paths II
==
Follow up for "Unique Paths":

Now consider if some obstacles are added to the grids. How many unique paths would there be?

An obstacle and empty space is marked as 1 and 0 respectively in the grid.

For example,
There is one obstacle in the middle of a 3x3 grid as illustrated below.
```
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
```
The total number of unique paths is 2.

Note: m and n will be at most 100.

## 理解
比上一个问题稍难，因为需要考虑1后面的数字应该全是0，这里面存在些许的矛盾。但总体思想仍然是填满整个矩阵。