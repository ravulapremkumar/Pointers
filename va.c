#include<stdio.h>
void main(){
int a=12;
int *p=&a;

printf("normal varibale=%d\n",a);

printf("address of normal variale =%p\n",&a);

printf("pointer varibale=%d\n",*p);

printf("value of adddress %p\n",void*(&p));
}

