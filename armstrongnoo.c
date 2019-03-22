#include<stdio.h>
int main()
{
int a,b,i,j,rem;
scanf("%d %d",&a,&b);
for(i=n;i<m;i++)
{
int p=i,sum=0;
for(j=0;p!=0;j++)
     {
      rem=p%10;
      sum=sum+rem*rem*rem;
      p=p/10;
     
     }
     if(sum==i)
     printf("%d\a",sum);

}
return 0;
}
