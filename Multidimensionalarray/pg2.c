#include<stdio.h>
int main(){
    int row,col;
    printf("Enter row\n");
    scanf("%d",&row);
    printf("Enter column\n");
    scanf("%d",&col);
    
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Sum = %ld\n",sum);
}