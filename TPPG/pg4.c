
// 1 program
/*    a
    a b
  a b c 
a b c d
*/

#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        char ch='a';
        for(int j=i;j<row;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
}

//2 program 
/*    a
    b a
  c b a
d c b a


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
*/


/*      1
      3 5
    7 9 11
13 15 17 19


#include<stdio.h>
int main(){
    int row;
    printf("Enter the row\n");
    scanf("%d",&row);
    int x=1;

    for(int i=1;i<=row;i++){
        for(int j=i;j<row;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            printf("%d\t",x);
            x=x+2;
        }
        printf("\n");
    }
}*/
        