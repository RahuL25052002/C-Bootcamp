/* _____________ Write a program to print numbers in reverse order_______-*/
#include<stdio.h>
void main(){
    int value1;
    int value2;
    int a=0;
    printf("Enter first \n");
    scanf("%d",&value1);
    printf("Enter end\n");
    scanf("%d",&value2);

    //for(int i=value2;i>=value1;i--){
       // printf("%d\n",i);
   // }

   for(int i=value1;i<=value2;i++){
    printf("%d\n",value2-a);
    a++;
   }
}