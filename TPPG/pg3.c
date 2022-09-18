/* A A A A 
   B B B B
   C C C C
   D D D D
   */

/*
#include<stdio.h>
int main(){
    char ch='A';
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%c\t",ch);
        }
        ch=ch+1;
        printf("\n");
    }
}*/

/* D D D D
   C C C C 
   B B B B 
   A A A A*/
/*
#include<stdio.h>
int main(){
    int row;
    
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A'+row-1;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}*/

/* D C B A
   D C B A
   D C B A
   D C B A
   
#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        char ch='A'+row-1;
        for(int j=1;j<=row;j++){
            printf("%c\t",ch);
            ch--;
        }
        printf("\n");
    }
}  */


/* A B C D 
   E F G H
   I J K L
   M N O P 

    #include<stdio.h>
    int main(){
        int row;
        printf("Enter the row\n");
        scanf("%d",&row);
        char ch='A';

        for(int i=1;i<=row;i++){
            for(int j=1;j<=row;j++){
                printf("%c\t",ch);
                ch++;
            }
            printf("\n");
        }
    }*/

/* P O N M
   L K J I
   H G F E
   D C B A
   */

#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A'+row+row+1;

    for(int i=1;i<=row;i++){ 
        for(int j=1;j<=i;j++){
            printf("%c\t",ch);
            ch--;
        }
        printf("\n");


    }
}



   