#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    int num1=0,num2=1,num3=0;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num3);
            num1=num2;
            num2=num3;
            num3=num1+num2;
        }
        printf("\n");
    }
}
    