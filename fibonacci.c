#sju
#include<stdio.h>
void main()
{
int i,a=0,b=1,n,t;
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
for(i=0;i<n;i++)
{
s=a+b;
printf("%d",s);
a=b;
b=s;
}
}
