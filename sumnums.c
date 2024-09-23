//WAP to find out sum of digits of a number.
#include <stdio.h>
int main () {
   int sum,dig,num;
   printf("enter the 3 digit number:");
   scanf("%d",&num);
   for (;num!=0;num/=10) { //how many digit user gave we dont know.
       dig=num%10;
       sum=sum+dig; //logic
       
   } printf("sum:%d",sum);
   return 0;
}