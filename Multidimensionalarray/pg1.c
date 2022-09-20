#include<stdio.h>
int  main(){
        int row,column;
        printf("Enter row\n");
        scanf("%d",&row);
        printf("Enter column\n");
        scanf("%d",&column);

        int arr[row][column];
        printf("Take Arrays element from user\n");
        for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                        scanf("%d",&*(*(arr+i)+j));
                }
        }

        printf("Arrays elemnet are\n");

        for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                        printf("%d\t",*(*(arr+i)+j));
                }
                printf("\n");


        }
        //printing reverse array
        printf("Reverse of array\n");

        for(int i=row-1;i>=0;i--){
                for(int j=column-1;j>=0;j--){
                        printf("%d\t",*(*(arr+i)+j));
                }
                printf("\n");
        }
}




