#include <stdio.h>
void main()
{
int a,b;
int sum=0;
scanf("%d",&b);

for(a=1;a<=b;a++)
{
if(a%2==0)
sum+=a;
}
printf("%d",sum);
return 0;
}
