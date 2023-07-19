#include<stdio.h>

int main(){
int a = 1 ,b = 1 ,c;
 c = a || b; // 1 1 1
 printf("a: %d,b: %d,c: %d : %d \n",a,b,c);
// c = a && ++b; // 1 2 1
// printf("a: %d,b: %d,c: %d : %d \n",a,b,c);
//c = a && b; // 1 1 1
//printf("a: %d,b: %d,c: %d : %d \n",a,b,c);

 return 0;
}