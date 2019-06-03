#include <stdio.h>

void main()
{
  char str[20];
  int i;
  printf("20글자 이하의 단어(영어)를 입력해주세요:");
  scanf("%s",&str);
  for(i=0;str[i]!='\0';i++)
  {
    printf("%c\n",str[i]);
  }
}
