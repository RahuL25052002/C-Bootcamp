#include<stdio.h>
void main(){
        int x;
        int ans;

        printf("Enter the value\n: ");
        scanf("%d",&x);
        ans= ++x + x++ + ++x;
        printf("The value of ans =%d\n",ans);
        printf("The value of x is=%d\n",x);


}