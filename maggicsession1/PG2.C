/* composite number */


#include<stdio.h>
int main(){
    int start;
    int end;
    //int count=0;
    printf("Enter the start\n");
    scanf("%d",&start);
    printf("Enter the end\n");
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
            if(count>2){
                printf("%d\t",i);
            }
        }
    }
