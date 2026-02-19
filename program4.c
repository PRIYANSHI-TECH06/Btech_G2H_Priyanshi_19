#include <stdio.h>

int main()
{
int a,b,temp;
    
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);

temp=a;
a=b;
b=temp;
printf("after swapping:\n");
printf("a=%d\n",a);
printf("b=%d",b);
return 0;
}



