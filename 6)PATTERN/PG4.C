#include<stdio.h>
int main(){
    float sum=0;
    for(int i=1;i<=5;i++){
        float package;
        printf("Enter the package %d \n",i);
        scanf("%f",&package);
        sum=sum+package;
        printf("Package %d is %f \n",i,package);
    }
    printf("Sum of package is %f ",sum);
}