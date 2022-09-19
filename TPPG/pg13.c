 /*   a
    b a
  c b a
d c b a
*/

#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
     char ch='a';
    for(int i=1;i<=row;i++){
       
        for(int j=i;j<row;j++){ // here i manage the space 
            printf("\t");
            
        }
        for(int k=1;k<=i;k++){
            printf("%c\t",ch); // here i manage the characters//
            ch--;
        }
        ch='a'+i;
        printf("\n");
        
        }
    }