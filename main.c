#include<stdio.h>
int count(int);
void main()
{
    printf("No of digits is %d ",count(123456789));
}

int count(int a){
int n=0;
for(int i=0;a>0; ){
    a/=10;
    n+=1;
}
return n;
}
