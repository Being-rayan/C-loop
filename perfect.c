//WAP to test whether a number is Perfect Number or not.
#include <stdio.h>
int main () {
    int i,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=1;i<num;i++){
        if (num % i == 0) {
        sum+=i;
    }
} if (sum==num) {
    printf("yes it's perfect !",num);
} else {
  printf("no it's not !",num);}
return 0;
} 