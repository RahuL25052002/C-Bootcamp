/* I H G
   F E D
   C B A
   */



#include<stdio.h>
int main(){
        int row;
    

        printf("Enter the number of row\n");
        scanf("%d",&row);
        char ch='A'+(row*row)-1;
        for(int  i=1;i<=row;i++){
                
                for(int j=row;j>=1;j--){
                        printf("%c ",ch);
                        ch--;
                        }
                        printf("\n");
        }
               
}

