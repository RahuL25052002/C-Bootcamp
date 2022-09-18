/* 4 4 4 4 
 * 3 3 3 3 
 * 2 2 2 2 
 * 1 1 1 1
 * */


#include<stdio.h>
int main(){
        int row;
        printf("Enter row \n");
        scanf("%d",&row);
        int temp=row;
        for(int i=1;i<=row;i++){
                for(int j=row;j>=1;j--){
                        printf("%d ",temp);
                }       
                temp--;
                printf("\n");
        }       
}  