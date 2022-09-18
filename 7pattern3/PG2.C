/* 3 b 1 d
   a 2 c 0
   3 b 1 d
   a 2 c 0
   */
#include<stdio.h>
void main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        int x=row-1;
        char ch='a';
        for(int j=1;j<=row;j++){
            if(i%2!=0){
                if(j%2!=0){
                    printf("%d ",x);
                }else{
                    printf("%c ",ch);
                }
                }else{
                if(j%2==0){
                    printf("%d ",x);
                }else{
                    printf("%c ",ch);
                }
                }
                ch++;
                x--;
        }
        printf("\n");
    }
}