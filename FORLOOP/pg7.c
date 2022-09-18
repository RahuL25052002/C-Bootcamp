#include<stdio.h>
void main(){
    int money;
    printf("Enter the money \n");
    scanf("%d",&money);
    if(money>=1000){
        if(money>1000){
            printf("You have more money to buy your coice shoes\n");
        }
        printf("You have enough money to having to buy shoes\n");
    }else if(money<1000){
        printf("You have not enough money to buy shoes");
    }else if(money<=0){
            printf("you have one option go home take deep sleep \n");
        }
    }


    