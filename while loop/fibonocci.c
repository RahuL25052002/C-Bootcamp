#include<stdio.h>
void main(){
    int value;
    int value1=1;
    int value2=1;
    int value3=0;
    int i=0;
    printf("Enter the number\n");
    scanf("%d",&value);
    while(value3<=value){
        printf("%d\t",value3);
        value1=value2;
        value2=value3;
        value3=value1+value2;
    }
}
