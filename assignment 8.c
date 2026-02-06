#include<cs50.h>
#include<stdio.h>
int main()
{
    int year= get_int ("Enter year: ");
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("leap year\n");
                else
                    printf ("Not a leap year");
                        return 0;
                        }
