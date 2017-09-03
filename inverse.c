#sju
#include<stdio.h>
void main()
{
int i,num;
int result;
printf("input a number:");
scanf("%d",&num);
result=calculatesum(num);
printf("\n sum of number from 1to %d:");
return 0;
}
int calcuatesum(int num){
int res;
if(num==1){
return(1);
}
else{
res=num+calculatesum(num-1);
}
return(res);
}
