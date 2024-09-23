//sum of digits of a number.
#include <stdio.h>
int main () {
int num,dig,sum=0;
printf("Enter the number:");
scanf("%d",&num);
for(;num!=0;num/=10) {// gives last after removing original last number (3)
dig=num%10; //gives last  digit (1)
sum=sum+dig;} // (2)
printf("the sum is %d",sum);
return 0;
}