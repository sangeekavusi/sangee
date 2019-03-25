#include<stdio.h>
void main()
{
int n,reversed number=0,remainder;
printf("enter an integer");
scanf("%d",&n);
while(n!=0);
{
remainder=n%10;
reversednumber=reversednumber*10+remainder;
n/=10;
}
printf("reversednumber=5d",reversednumber);
return 0;
}
