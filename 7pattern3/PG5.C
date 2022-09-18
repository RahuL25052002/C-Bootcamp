/*1 4 3
  16 5 36
  7 64 9 */
#include<stdio.h>
int main(){
    int row;
    int x=1;
    printf("Enter row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i%2!=0){
                if(j%2==0){
                    printf("%d ",x*x);
                    x++;
                }else{
                    printf("%d ",x);
                    x++;
                }
                }else{
                    if(j%2!=0){
                        printf("%d ",x*x);
                        x++;
                    }else{
                        printf("%d ",x);
                        x++;
                    }
                }
        }
        printf("\n");
    }
}
                

