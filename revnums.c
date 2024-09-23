//WAP to reverse of digits of a number.
#include <stdio.h>
int main () {
   int sum,dig,num;
   printf("enter the 3 digit number:");
   scanf("%d",&num);
   for (;num!=0;num/=10) {
       dig=num%10;
       sum=sum*10+dig; //logic
       
   } printf("sum:%d",sum);
   return 0;
}