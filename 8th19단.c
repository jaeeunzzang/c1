#include <stdio.h>

int main()
{
  int a[20][19][3] ={0};
  int i,j;
  int sum;
  
  for(i=0;i<20;i++)
  {
    for(j=0;j<19;j++)
    {
       a[i][j][0] = i+1;
      a[i][j][1] = j+1;
      a[i][j][2]= (i+1)*(j+1);
    }
  }
  
  printf("구구단을 출력합니다.\n");
  
  for(i=0;i<20;i++)
  {
    printf("%d 단\n",i+1);
    
    for(j=0;j<19;j++)
    {
      printf("%d * %d = %d\t",a[i][j][0],a[i][j][1],a[i][j][2]);
      
      if(j%4==0)
        printf("\n");
    }
  }
  
  printf("합계를 출력합니다.\n");
  
  for(i=0;i<20;i++)
  {
    for(j=0;j<19;j++)
    {
      sum= a[i][j][0]+a[i][j][1]+a[i][j][2];
    }
  }
  printf("합계 : %d\n",sum);
  return 0;
}
      
