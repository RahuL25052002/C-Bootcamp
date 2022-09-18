#include<stdio.h>
int main(){
    char ch='A';

    for(int i=1;i<=3;i++){
         int space=3;
         space=space-i;
            while(space){
                printf("  ");
                space--;
            }
        for(int j=1;j<=i;j++){

                printf("%c ",ch);
                ch++;
        }
        printf("\n");
    }
}