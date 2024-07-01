#include<stdio.h>
main(){
     int n, i, s;
     n = 100;
     s = 0;
     for ( i = 1; i <= n ; i++)
     {
          s = s + i;
     }
     printf("Total: %d\n", s);
     return 0;
}