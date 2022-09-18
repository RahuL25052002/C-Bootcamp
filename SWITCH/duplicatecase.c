#include<stdio.h>
void main(){
        int input;
        int x=2;
        int y=3;

        scanf("%d",&input);
        switch(input){
                case 5:
                        printf("5\n");//beacuse 5 is already use here;
                        break;
                case 2+3:
                        printf("2+3\n");//duplicate case errror
                        break;
                case 3+2:
                        printf("3+2\n");//duplicate case error 
                        break;
                default:
                        printf("In Default");
        }
}
