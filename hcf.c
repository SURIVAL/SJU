#sju
#include<stdio.h>
void main()
{
int x,y,hcf;
printf("enter two integer\n");
scanf("%d%d",&x,&y);
hcf=gcd(x,y);
printf("greater common divisior of%dand%d=%d\n",x,y,hcf);
return 0;
}
