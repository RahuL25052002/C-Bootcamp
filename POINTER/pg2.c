#include<stdio.h>
int main(){
        int x=1000;
        int *ptr=&x;

        printf("%p\n",(ptr+'z'));
        printf("%d\n",*(ptr+'z'));
}
  