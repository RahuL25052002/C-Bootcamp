#include<stdio.h>
void main(){
    int marks;
    int temp=0;
    for(int i=1;i<=5;i++){
        printf("Enter the subject Marks \n");
        scanf("%d",&marks);
        temp=temp+marks;
    }
    printf("Total marks is %d ",temp);
}
