#include <stdio.h>
void main()
{
char a;
scanf("%c\n",&a);

while(a!='q'){
    
printf("%c\n",a);
scanf("%c\n",&a);

}
printf("%c\n",a);
return 0;
}

/* 모범소스
#include <stdio.h>

int main()
{
    char a;
    while(1)
    {
        scanf("%c ", &a);
        if(a != 'q') printf("%c\n",a);
        else {
            printf("q");
            return 0;
        }
    }
}

*/
