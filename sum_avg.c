//10 different numbers as input. Print their sum and average.
#include <stdio.h>
int main () {
    int avg,sum=0,num;
    printf("Enter 10 Numbers:\n");
    for(int i=0;i<10;i++) { //0 to 9 means 10 elements
    scanf("%d",&num);
      sum+=num;
    }
  
    avg=sum/10;
    printf("Sum =%d\n",sum);
    printf("Average=%d",avg);
   return 0;
}