#include<stdio.h>
int main(){
    int x=10;
    int *ptr1=&x;
    int **ptr2=&ptr1;

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",ptr1);
    printf("%p\n",&ptr1);
    printf("%p\n",ptr2);

    printf("%d\n",*ptr1);
    printf("%d\n",**ptr2);



}