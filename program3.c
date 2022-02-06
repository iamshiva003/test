// 3.program to simulate the working of Tower of Hanoi problem for N disks, print the total number of moves taken by the program.

#include <stdio.h>

void tower (int n, char source, char temp, char destination) 
{
    if (n == 0) 
        return;

    tower (n-1,source,destination,temp);
    printf ("Move disc %d from %c to %c\n",n,source,destination);

    tower (n-1,temp,source,destination);
}

int main()
{
    int n;

    printf ("Enter the number of disks \n");
    scanf("%d",&n);

    tower(n,'A','B','C');
    return 0;
}