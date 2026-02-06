#include<cs50.h>
#include<stdio.h>
int main()
{
    int age= get_int ("enter age");
        int student = get_int("Enter student status (1=student, 0=not): ");
            if (age<=12)
                printf("Ticket price = 50\n");
                    else if (age<=60)
                        {
                                if (student==1)
                                        printf("ticket price=80\n");
                                                else
                                                        printf ("ticket price=100\n");
                                                            }
                                                                else
                                                                    printf("ticket price=60\n");
                                                                        return 0;
                                                                        }
