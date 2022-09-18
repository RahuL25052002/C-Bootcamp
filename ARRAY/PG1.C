#include<stdio.h>
int main(){
    int arr[3]={10,20,30};
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    printf("%p\n",&arr+2);
}