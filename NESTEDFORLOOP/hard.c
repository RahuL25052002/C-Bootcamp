#include<stdio.h>
int main(){
    int x;
    int num=1;
    int sum=1;
    printf("Enter the number\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(num%2!=0){
                sum=sum+num;
            
            }
        
            
            printf("%d ",sum);
            num++;

        }
        printf("\n");
    }
}