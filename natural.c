//natural numbers.
#include <stdio.h>
int main () {
    int i,n;
    printf("Enter the n value:");
    scanf("%d",&n);
    if (n>=0) {
    for(i=1;i<=n;i++) {
        printf("%d\n",i);
    } 
    }else {
        printf("n value isn't 1 !");
    }
    
   return 0;
}