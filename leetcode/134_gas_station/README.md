# Gas Station
==
There are N gas stations along a circular route, where the amount of gas at station i is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.

Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.

## 理解
哦，起点是不确定的，因为起点不同，导致某处可能中断。因此要找到一个合适的起点才有可能转一圈。