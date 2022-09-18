#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
   
    for(int i=1;i<=row;i++){
        int x=1;
        char ch='A';
        for(int j=i;j<=row;j++){
            if(j%2!=0){
                printf("%d ",x);
                x++;
            }else{
                printf("%c ",ch);
                ch++;
            }

            }printf("\n");
    }
}