#include <stdio.h>
#include <string.h>

void main()
{
int a,b,c;
printf("연도, 월, 일을 온점으로 구분해 입력해 주세요:");
scanf("%d.%02d.%02d",&a,&b,&c);
printf("%d.%02d.%02d",a,b,c);


char st[15];

printf("주민등록번호를 '-'를 사용해 입력해주세요:");
scanf("%s",&st);

if (st!='-')
{

printf("%s",st);

}
