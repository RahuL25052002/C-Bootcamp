/* 4 a 3 b
   4 a 3 b
   4 a 3 b
   4 a 3 b 
*/

#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        int x=row;
        char ch='a';
        for(int j=1;j<=row;j++){
            if(j%2!=0){
                printf("%d ",x);
                x--;
            }else{
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
}