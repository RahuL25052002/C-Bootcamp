//WAP to print charcter from i to l;

#include<stdio.h>
void main(){
    char value1;
    char value2;
    printf("Enter first \n");
    scanf("%c",&value1);
    printf("Enter end\n");
    scanf(" %c",&value2);

    for(int i=value1;i<=value2;i++){
        printf("%c",i);
        
    }
}