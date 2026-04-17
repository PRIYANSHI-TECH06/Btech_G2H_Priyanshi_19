#include <stdio.h>
int main(){
    int n,i,a[100],min,max;
    scanf("%d",&n);

    for(i=0;i<n;i++) scanf("%d",&a[i]);

    min=max=a[0];

    for(i=1;i<n;i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }

    printf("Min=%d Max=%d",min,max);
    return 0;
}
