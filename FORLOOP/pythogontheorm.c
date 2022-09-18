/*#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a\n,Enter b\n,Enter c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    char case1=((a*a)+(b*b)==(c*c));
    char case2=((a*a)==(b*b)+(c*c));
    char case3=((a*a)+(c*c)==(b*b));

    if(case1||case2||case3){
        printf("pythogoras theorm is applicable");
    }else{
        printf("pythogoras theorm is not applicable");
    }
}*/ 
#include<stdio.h>
void main(){ 
    int ans;
    int x=3;
    ans= ++x + x++ + ++x;
    printf("The value of ans =%d\n",ans);
    printf("The value of x is=%d\n",x);
    



}

