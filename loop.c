#include<stdio.h>
int main(){
    int i,min=0;

    for(i=1;i<=10;i++){
        min-=i;
        printf("%d\n",min);
    }
    return 0;
}