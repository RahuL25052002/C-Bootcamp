#include<stdio.h>
int main(){
    int N;
    printf("Enter size\n");
    scanf("%d",&N);
    
    int Arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&Arr[i]);
    }
    
    for(int i=0;i<N;){
        printf("%d\n",Arr[i]);
        i=i+2;
    }
    }
    
