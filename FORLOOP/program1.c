/* write a program print odd number sqaure taking user input
*/

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
            printf("Square of  %d=%d\n",i,i*i);
        }
    }
}