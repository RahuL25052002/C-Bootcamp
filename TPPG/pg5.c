/* SPACE TRIANGLE PATTERN */

/*    1
    3 2 3
  5 4 3 4 5
7 6 5 4 5 6 7  */


#include<stdio.h>
int main(){
    int row;
    printf("Enter row\n");
    scanf("%d",&row);
    int x=1;

    for(int i=1;i<=row;i++){
        for(int j=i;j<row;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            printf("%d\t",x);
            x--;
            
        }
        x=1+i;
        for(int p=1;p<i;p++){
            printf("%d\t",x);
            x++;
        }

        x++;
        printf("\n");

        }
        //printf("\n");
        }
    
