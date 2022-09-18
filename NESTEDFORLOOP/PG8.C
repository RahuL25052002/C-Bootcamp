
#include<stdio.h>
int main(){
    int x=1; 

    for(int i=3;i>=1;i--){
        for(int j=1; j<=3;j++){
            if(i>j){
                printf(" ");
            }else{
            printf("%d    ",x);
            x++;
            }
        }
        printf("\n");
    }
}
