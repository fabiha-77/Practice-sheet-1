#include<cs50.h>
#include<stdio.h>
int main()
{
    int n= get_int ("Enter number n: ");
        for (int i=1; i<=n; i++)
            printf("%d * %d = %d\n", n, i, n * i);
                return 0;
                }
