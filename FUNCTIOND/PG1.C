#include<stdio.h>
int add(int a,int b)
{
    return(a+b);
    
}
int main()
{
    int m=20,n=40,sum;
    sum=add(m,n);
    printf("Sum is %d",sum);
}