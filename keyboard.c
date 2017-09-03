#sju
#include<stdio.h>
void main()
{
char ch;
int i;
printf("print 1to5 again and again");
while(1){
for(i=1;i<=5;i++)
printf("\n%d",i);
ch=getch();
if(ch=='q')
exit(0);
}
}
