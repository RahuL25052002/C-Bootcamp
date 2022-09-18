/*  1234554321
    1234**4321
    123****321
    12******21
    1********1
    */
#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        int x=1;
        for(int j=i;j<=row;j++){
            printf("%d\t",x);
            x++;
        }
        for(int k=1;k<i;k++){
            printf("\t");
        }
        for(int m=1;m<i;m++){
            printf("\t");
        }
        x=x-1;
        for(int p=i;p<=row;p++){
            printf("%d\t",x);
            x--;
        }
        printf("\n");
    }
}
        