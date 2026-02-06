#include<cs50.h>
#include<stdio.h>
int main()
{
    int n= get_int ("Enter a number: ");
        int count =0;
           for (; n != 0; n = n / 10)
               {
                       count ++;
                           }
                                   printf("Digits=%d\n",count);\
                                           return 0;
                                               }
