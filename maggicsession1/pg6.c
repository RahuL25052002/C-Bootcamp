#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);

    int j=2;

    for(int i=1;i<=row;i++){
        int count=0;
        for(;;j++){
            int add=0;
            for(int p=2;p<j;p++){
                if(j%p==0){
                    add++;

                }
            }
            if(add==0){
                printf("%d\t",j);
                count++;
                
            }
            if(count==3){
                j++;
                break;
            }
           // x++;
        }
        printf("\n");
    }
}
    