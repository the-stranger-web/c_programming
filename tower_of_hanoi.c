#include <stdio.h>

// n => total number of disks
// A => tower at which disks are initially mounted
// B => auxiliary tower
// C => tower at which disks are to be mounted

// Rule:-> Disks should always be mounted from low to high in descending order
// Rule:-> You can move only one disk at a time

void hanoi(int n, char A, char C, char B)
{
    if (n==1)
    {
        printf("Move disk %d from %c to %c.\n",n,A,C);
        return;
    }
    hanoi(n-1, A, B, C);
    printf("Move disk %d from %c to %c.\n",n,A,C);
    hanoi(n-1,B,C,A);
}
int main()
{
    int n;
    printf("Enter number of disks:\n");
    scanf("%d",&n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}