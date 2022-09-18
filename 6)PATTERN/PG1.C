#include<stdio.h>
int main(){
    int row;
    int temp;
    printf("Enter the row\n");
    scanf("%d",&row);
    temp=row;

    for(int i=1;i<=row;i++){
    
        for(int j=row;j>=1;j--){
            printf("%d ",temp);
            temp--;
        }
        temp=temp+row;
        temp++;
        printf("\n");


        }
    }
