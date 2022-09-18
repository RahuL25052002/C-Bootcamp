/* = = = = = =
   $ $ $ $ $ $
   @ @ @ @ @ @
   = = = = = =
   $ $ $ $ $ $ 
   @ @ @ @ @ @
   */

#include<stdio.h>
void main(){
    int row;
    printf("Enter the no.of you want repeat this\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=3*row;j++){
            printf("= ");
        }
    
        printf("\n");
    
    
        for(int k=1;k<=3*row;k++){
            printf("$ ");
        }
        printf("\n");

        for(int m=1;m<=3*row;m++){
            printf("@ ");
        }
        printf("\n");
    }
}

        