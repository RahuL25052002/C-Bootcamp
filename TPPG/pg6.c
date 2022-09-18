/* SPACE TRIANGLE PATTERN */

/*     1
     2 1 2
   3 2 1 2 3
 4 3 2 1 2 3 4 */


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
        x=2;
        for(int p=1;p<i;p++){
            printf("%d\t",x);
            x++;
        }

        x=1+i;
        printf("\n");

        }
}
    
