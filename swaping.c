#include<stdio.h>
int main(){
    int a,b,temp;

    a=5;
    b=6;

    temp=b;//temp=6
    b=a;// b=5
    a=temp;//a=6

    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}