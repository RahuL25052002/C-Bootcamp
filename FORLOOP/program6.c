
/* write a program to print the square of odd number  cube of even number*/
#include<stdio.h>
void main(){
    int value1;
    int value2;
    printf("Enter first \n");
    scanf("%d",&value1);
    printf("Enter end\n");
    scanf("%d",&value2);

    for(int i=value1;i<=value2;i++){
        if(i%2!=0){
            printf("Square of %d=%d\n",i,i*i);
        }else{
            printf("Cube of %d is %d\n",i,i*i*i);
        }
    }
}