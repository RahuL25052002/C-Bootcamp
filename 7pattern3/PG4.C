/* a B c D
   b C d E
   c D e F
   d E f G
   */

#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A';
    char ch1='a';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
                if(j%2!=0){
                    printf("%c ",ch1);
                }else{
                    printf("%c ",ch);
                }
                ch++;
                ch1++;
                }
                ch='A'+i;
                ch1='a'+i;
                printf("\n");
    }
}
        