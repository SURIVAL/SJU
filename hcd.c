#sju
#include<stdio.h>
void main()
{
int a,b,x,y,t,gcd,lcm;
printf("enter two integer \n");
scanf("%d%d",&x,&y);
a=x;
b=y;
while(b!=0-){
t=b ;
b=a%b;
a=t;
}
gcd=a;
lcm=(x*y)/gcd;
printf("greatest common divisorof%dand%d=%d\n",x,y,gcd);
printf("least common multiple of %dand%d=%d\n",x,y,lcm);
return 0;
}
