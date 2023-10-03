#include <stdio.h>
 
int main() {
    // Write C code here
    int n,a,b,c,d,e,f,g,h,i,j;
   scanf("%d",&n);
   a=n/5;
   b=n%5;
   c=b/4;
   d=b%4;
   e=d/3;
   f=d%3;
   g=f/2;
   h=f%2;
   i=h/1;
   j=h%1;
   printf("%d",a+c+e+g+i);
 
    return 0;
}
