/* Write a program to print count of number is divisible by 5*/

#include<stdio.h>
void main(){
    int value1;
    int value2;
    int count=0;
    printf("Enter first \n");
    scanf("%d",&value1);
    printf("Enter end\n");
    scanf("%d",&value2);

    for(int i=value1;i<=value2;i++){
        if(i%5==0){    //if(i%5==0 && i>0) for not taking o as divisible by 5 for that.//
            count++;
            
        }
    }
    printf("Count of 5 divisible number is %d",count);
}