#include <stdio.h>

int main()
{
int n,i;
long int fact=1;
    
    printf("enter a number:\n");
    scanf("%d",&n);

for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial=%d",fact);

return 0;
}
