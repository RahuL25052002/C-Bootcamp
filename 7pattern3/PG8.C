/* 16 15 14 13
    L K  J  I
    8 7  6  5
    D C  B  A
    */
#include<stdio.h>
void main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    int x=row*row;
    char ch='A'+(row*row-1);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i%2!=0){
                printf("%d\t",x);
            }else{
                printf("%c\t",ch);

            }
            ch--;
            x--;
            }
            printf("\n");

        }
}