/*   1  3  5
     7  9  11
     13 15 17

*/


#include<stdio.h>
int  main(){
    int x=1;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d   ",x);
            x=x+2;
        }
        printf("\n");
    }
}