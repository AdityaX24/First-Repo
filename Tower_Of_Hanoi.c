#include<stdio.h>
 void toh(int n,char src,char dest,char aux)
 {
     if(n==1)
     {
         printf("\n Move disc %d from %c to %c",n,src,dest);
     }
     else
     {
         toh(n-1,src,aux,dest);
         printf("\n Move disc %d from %c to %c",n,src,dest);
         toh(n-1,aux,dest,src);
     }
 }
 void main()
 {
     toh(2,'A','B','C');
 }