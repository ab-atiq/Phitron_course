#include<stdio.h>
int main(){
int p = 34;
double *pa = &p;
printf("%d %p",p,*pa);
double *pb = &p+1;
printf("%d %p",p,*pb);
return 0;
}
