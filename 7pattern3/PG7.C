/* 1 4 27 
   4 27 16
   27 16 125
   */
#include<stdio.h>
void main(){
    int row;
    int x=1;
    printf("Enter the row\n");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i%2!=0){
            if(j%2!=0){
                printf("%d ",x*x*x);
                x++;
            }else{
                printf("%d ",x*x);
                x++;
            }
            }else{
                if(j%2==0){
                printf("%d ",x*x*x);
                x++;
            }else{
                printf("%d ",x*x);
                x++;
            }
            }
            }
            x=1+i;
            printf("\n");
        }
    }