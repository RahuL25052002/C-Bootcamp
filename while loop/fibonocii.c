#include<stdio.h>
void main(){
    int num;
    int value=1;
    int value1=1;
    int value2=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(value2<=num){
        printf("%d\t",value2);
        value=value1;
        value1=value2;
        value2=value+value1;
    }
}
    