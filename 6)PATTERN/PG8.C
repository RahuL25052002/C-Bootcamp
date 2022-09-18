/* D C B A
   e d c b
   F E D C
   g f e d
   */
#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A'+(row-1);
    char ch1='b'+(row-1);
    for(int i=1;i<=row;i++){
        if(i%2!=0){
        for(int j=1;j<=row;j++){
            printf("%c ",ch);
            ch--; 
        }
            printf("\n");
            ch=ch+row+2;
        }else{

        for(int k=1;k<=row;k++){
            printf("%c ",ch1);
            ch1--;
        }
        printf("\n");
        ch1=ch1+row+2;
        }
        }
    }
