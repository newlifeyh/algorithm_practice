# Single Number III
==
Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

Note:
The order of the result is not important. So in the above example, [5, 3] is also correct.
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?

## 理解
还是需要xor运算。这里再次提醒我，相差1，结果是最后一位1发生变化！这与前面那道求一个数是不是2的n次方一样。