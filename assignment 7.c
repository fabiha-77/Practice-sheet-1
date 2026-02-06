#include<cs50.h>
#include<stdio.h>
int main()
{
int a = get_int("Enter first number: ");
int b = get_int("Enter second number: ");
if (a>b)
printf("first number is larger\n");
else if (b>a)
printf("Second number is larger\n");
else
printf("both are equal\n");
return 0;

}
