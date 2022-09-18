#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A';

    for(int i=1;i<=row;i++){
        for(int j=i;j<row;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            printf("%c\t",ch);
            ch--;
        }
        ch='A'+i;
        for(int n=1;n<i;n++){
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
}

