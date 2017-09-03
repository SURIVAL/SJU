#sju
#include<stdio.h>
void main()
{
unsigned char ch;
ch=32;
while(ch<=127)
{
printf("%c[%03d]",ch,ch);
ch++;
}
print("\n);
return 0;
}

