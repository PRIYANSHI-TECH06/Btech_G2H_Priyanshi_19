#include <stdio.h>

int main()
{
    int n;
    float sum=0.0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=1.0/i;
    }
printf("sum of the series upto 1/%d is: %f\n",n,sum);

    return 0;
}
