// 2.Program to claculate the length of the string

#include <stdio.h>

int clacLength(char *);

int main()
{
    char str[100];
    int length;

    printf ("Enter the string \n");
    gets (str);

    length = clacLength(str);

    printf ("The length of the string is: %d\n", length);
    return 0;
}

int clacLength(char *ch)
{
    int counter=0;

    while (*ch != '\0')
    {
        counter++;
        ch++;
    }
    return counter;
}