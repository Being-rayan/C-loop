//Fibonacci series.
#include<stdio.h>
int main () {
    int num,n1=0,n2=1,nxt,i;
    printf("number of terms:");
    scanf("%d",&num);
    printf("the Fibo series is :%d%d",n1,n2);
    for(i=3;i<=num;i++) {
        nxt=n1+n2;
        n1=n2;
        n2=nxt;
        printf("%d",nxt);
    }
    return 0;
}