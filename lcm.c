#sju
#include<stdio.h>
void main()
{
int n1,n2,x,y;
print("\n enter two number:");
scanf("%d%d",&n1,&n2);
x=n1,y=n2;
while(n1!=n2){
if(n1>n2)
n1=n1-n2;
else
n2=n2-n1;
}
printf("l.c.m=%d",x*y/n1);
return 0;
}
