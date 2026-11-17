#include <stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(void)
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    printf("Because swapping:a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping:=%d,b=%d",a,b);
    return 0;
}