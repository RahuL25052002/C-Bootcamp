/* 1    3   5
   7    9   11
   13   15   17
   */



#include<stdio.h>
int main(){
    int x;
    int num=1;
    printf("Enter the number\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            printf("%d   ",num);
            num=num+2;
        }
        printf("\n");
    }
}