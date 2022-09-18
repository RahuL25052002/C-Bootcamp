/* 2 3 5
   7 11 13
   17 19 23*/
#include<stdio.h>
int main(){
    int row;
    int count=0;
    int x=1;
    printf("Enter the row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;){
               for(int k=1;k<=x;k++){
                 if(x%k==0){
                    count++;
                 }
                 x++;
               }
               if(count==2){
                printf("%d ",x);
                //j++;
               }
              // x++;
               j++;
        }
        printf("\n");
    }
}
            
