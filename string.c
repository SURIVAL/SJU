#sju
#include<stdio.h>
void main()
int counter(char text[])
{
int length=strlen(text),counter=0;
for(inti=0;i<length;i++)
{
if(is alpha(text[i]))
{
counter++;
}
}
return counter;
}

