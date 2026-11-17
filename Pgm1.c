#include <stdio.h>
int main(void)
{
    float a,b;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("addition=%.2f\n",a+b);
    printf("Subtraction=%.2f\n",a-b);
    printf("Multiplication=%.2f\n",a*b);
    if (b!=0)
    printf("Division=%.2f\n",a/b);
else
printf("Division is not possible because the second number is zeero.\n");
return 0;
}