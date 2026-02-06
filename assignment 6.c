#include<cs50.h>
#include<stdio.h>
int main()
{
    int marks= get_int("Enter marks: ");
        if(marks>=80)
            printf("Grade A\n");
                else if (marks>=60)
                    printf("Grade B\n");
                        else if (marks>=40)
                            printf ("Grade C\n");
                                else
                                    printf("fail");

                                        return 0;

                                        }
