#include<stdio.h>
int main(){
    int i,num,sum;

    printf("eneter the number");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        sum=num*i;
        printf("%d\n",sum);
    }
    return 0;
}