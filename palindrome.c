//palindrome
#include <stdio.h>
int main () {
int i,num,dig,org,sum=0; // sum may contain garbage value initially.
printf("enter the number:");
scanf("%d",&num);
org=num; // if  not done...loop will modify the original value of num.
for(;num!=0;num/=10){  // (3)
    dig=num%10; // gives the last digit of a number. (1)
    sum=sum*10+dig;} //storing the final series. (2)
    if (sum==org) {
        printf("%d is a palindrome !",org); }
        else { printf("%d is not a palindrome !",org);
        
    }
     return 0;
}