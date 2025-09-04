#include<stdio.h>
int main(){
    int i;
    double sum=0;

    for(i=1;i<=10;i++){
        sum+=i;
    }
    printf("%lf\n",sum);

    for(i=10;i>=1;i--){
        sum+=i;
    }
    printf("%lf\n",sum);

    return 0;
}

