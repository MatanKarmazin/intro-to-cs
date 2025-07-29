#include <stdio.h>
void main(){
    int a=5,b=3,c;
  //  printf("%d%d\n",a,b);
  //  a = a - 2;
  //  b = b + 2;
    printf("%d%d\n",a,b);
    c=a; //c=5
    a=b; // a=3
    b=c; // b=5
  printf("%d%d\n",a,b);
}
