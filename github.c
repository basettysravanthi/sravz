#include<stdio.h>
int main()
{
int x , p, sum=0, r;
scanf("%d %d",&x,&p);
while(x>0)
{
r=(x*p)/100;
sum=sum+r;
x=x-r;
}
printf("%d\n",sum);
return 0;
}
