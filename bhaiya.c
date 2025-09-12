#include<stdio.h>
int main(){
    int i,n;

    printf("enter value of n");
    scanf("%d\n",&n);

    for(i=1;i<=n;i++){
        if(n%2==0){
            printf("it is powew of 2");
        }
        else{
            printf("it is not power of 2");
        }

    }
    return 0;
}