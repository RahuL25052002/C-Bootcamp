#include<stdio.h>
void main(){
    int nop;
    printf("Enter the value\n");
    scanf("%d",&nop);
    float price;
    char row;

    printf("Enter the price\n");
    scanf("%f",&price);

    printf("Enter the row\n");
    scanf(" %c",&row);

    printf("not is=%d\n",nop);
    printf("price=%f\n",price);
    printf("row=%c\n",row);
}

