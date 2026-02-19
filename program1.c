
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    int sum;
    float per;
    printf("enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
per=sum/5.0;
printf("total marks=%d\n",sum);
printf("percentage=%.2f",per);



    return 0;
}
