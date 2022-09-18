/* D e F g
   e D c B
   F g H i
   g F e D
   */
#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A'+(row-1);
    char ch1='a'+(row-1);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i%2!=0){
                if(j%2!=0){
                    printf("%c ",ch);
                }else{
                    printf("%c ",ch1);
                }
                ch++;
                ch1++;
                }else{
                    if(j%2==0){
                        printf("%c ",ch);
                    }else{
                        printf("%c ",ch1);
                    }
                    ch--;
                    ch1--;
                    }
                }
                ch='A'+row-1+i;
                ch1='a'+row-1+i;
                printf("\n");

            }

}