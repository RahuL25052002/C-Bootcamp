/* 2 3 5
   7 11 13
   17 19 23*/


#include<stdio.h>
int main(){
    int row;
    int x=1;
    int count=0;
    printf("Enter the row\n");
    scanf("%d\n",&row);

  for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==2){
        printf("%d ",i);
    }
    printf("\n");
  }
}