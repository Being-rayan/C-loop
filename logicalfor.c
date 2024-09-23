// logical for loop.
#include <stdio.h>
int main () {
   int i,j;
   for (i=1,j=0;i<=3 && j<=10;i++,j++) { //AND operation working.
       printf("%d %d\n",i,j);
   }
    return 0;
}