#include<cs50.h>
#include<stdio.h>
int main()
{
    float c = get_float("celsius: ");
    float f = (c*9/5)+32;
    printf("Fahrenheit: %.1f\n",f);
    return 0;
}
