#include<stdio.h>

int main()
{
printf("hello");
  int a,b,c;
  
  printf("연,월,일을 입력:");
  scanf("%04d.%02d.%02d",&a,&b,&c);
  printf("%04d.%02d.%02d",a,b,c);
  
return 0;
}
