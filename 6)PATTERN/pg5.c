/*  3 2 1 
    c b a
    3 2 1 
    c b a
    */



#include<stdio.h>
int main(){
        int row;
        int temp;
        printf("Enter the number of row\n");
        scanf("%d",&row);
        for(int i=1;i<=row;i++){
                //int x=1;
                char ch='a'+(row-1);
                for(int j=row;j>=1;j--){
                        if(i%2!=0){
                                printf("%d ",j);
                                
                        }else{
                                printf(" %c ",ch);
                                ch--;
                        }
                }
                printf("\n");
        }
}
