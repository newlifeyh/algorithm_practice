# Sort List
==
Sort a linked list in O(n log n) time using constant space complexity.

## 理解
==
既然是nlgn的复杂度，那就应该是divide-conquer的方法了？虽然解出来了，但因为逻辑不是很清晰简洁，用了lldb才完成，有几个点没有能够第一时间注意到，遗憾。晚上再写一遍。<br>

论坛里面说递归方法不算constant space。需要用循环的方法。这个我最初也是想过的。先两两比较，然后merge成四四的。。。。做第二遍的时候写一下。