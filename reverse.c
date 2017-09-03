#sju
#include<stdio.h>
void main()
{
int n,y=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
y=(n%=10);
printf("%d",y);
n=n/10
}

