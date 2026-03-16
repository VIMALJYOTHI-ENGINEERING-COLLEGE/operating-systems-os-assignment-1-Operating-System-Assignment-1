/* 1 Write a C program priority.c that implements preemptive priority CPU
scheduling(high value has higher priority).
Input Format:
n
PID1 AT1 BT1 PR1
PID2 AT2 BT2 PR2
..............................
PIDn ATn BTn PRn
Sample Input:
5
P1 0 5 2
P2 1 3 4
P3 2 4 1
P4 3 2 3
P5 4 6 5
Sample Output:
Waiting Time:
P1 5
P2 6
P3 14
15 CO1 L3
1
P4 8
P5 0
Turnaround Time:
P1 14
P2 9
P3 18
P4 10
P5 6
Average Waiting Time: 7.40
Average Turnaround Time: 11.40 */
