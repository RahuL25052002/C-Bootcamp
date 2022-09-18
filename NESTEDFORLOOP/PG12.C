/*  A   B   C
    B   C   D
    C   D   E
    */





#include<stdio.h>
int main(){
    char ch='A';
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%c ",ch);
            ch++;
        }
        ch=ch-2;
        printf("\n");
    }
}