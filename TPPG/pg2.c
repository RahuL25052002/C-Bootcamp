/* 1 3 5 7 
   1 3 5 7
   1 3 5 7
   */

#include<stdio.h>
int main(){
    int row;
    //int x=1;
    printf("Enter the row\n");
    scanf("%d",&row);
    int j=1;

    for(int i=1;i<=row;i++){
        for(j=1;j<=row*2;){
            printf("%d\t",j);
            j=j+2;
        }
        printf("\n");
    }
}