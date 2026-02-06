#include<cs50.h>
#include<stdio.h>
int main()
{
    int n= get_int ("Enter number: ");
        int fact = 1;
            for (int i=1; i<=n; i++)
                {
                    fact *= i;
                }
                    printf("factorial=%d\n",fact);
                        return 0;
                        }
