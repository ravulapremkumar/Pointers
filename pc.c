#include<stdio.h>
void main(){
int a=10;
int b=100;

int *const p=&a;
printf("%d",*p);
*p=122;
printf("%d",*p);
p=&b;
printf("%d",*p);

}
