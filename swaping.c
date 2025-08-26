#include<stdio.h>
int main(){
    int a,b,temp;

    a=5;
    b=6;

    temp=a;//temp=5
    a=b;// a=6
    b=temp;//b=5
    
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}