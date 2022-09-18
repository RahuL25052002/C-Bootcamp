/* D C B A
   e d c b
   F E D C
   g f e d
   */
#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    char ch='A'+(row-1);
    char ch1='b'+(row-1);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i%2!=0){
                printf("%c ",ch);
                ch--; 
           }else{
                printf("%c ",ch1);
                ch1--;
                
            }
            ch=ch+row+2;
            ch1=ch1+row+2;
               //printf("\n");
                //ch=ch+row;


        }
       // ch=ch+row;
      //  ch1=ch1+1;
        
        printf("\n");
        }
}
    
