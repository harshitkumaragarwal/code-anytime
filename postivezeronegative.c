#include<stdio.h>
int main(){
    float num;

    printf("enter the number");
    scanf("%f",&num);

    if(num>0){
        printf("posistive");
    }
    else if(num== 0){
        printf("zero");
    }
    else{
        printf("negative");
    }
    return 0;
}