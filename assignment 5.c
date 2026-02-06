#include<cs50.h>
#include<stdio.h>
int main()
{
    int n= get_int("Enter a number: ");
        if (n>0)
            printf("positive\n");
                else if(n<0)
                    printf("negative\n");
                        else
                            printf ("zero\n");
                                return 0;
                                }
