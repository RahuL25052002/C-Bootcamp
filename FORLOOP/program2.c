/*_______________ write a program to print even number addition ___________*/

#include<stdio.h>
void main(){
    int value1;
    int value2;
    int sum=0;
    printf("Enter first \n");
    scanf("%d",&value1);
    printf("Enter end\n");
    scanf("%d",&value2);

    for(int i=value1;i<=value2;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("Sum of even number is %d",sum);
}