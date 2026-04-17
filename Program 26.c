#include <stdio.h>
int main(){
    int n,i,j,k,a[10][10],b[10][10],sum[10][10],mul[10][10];

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    // Addition
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }

    printf("\n");

    // Multiplication
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mul[i][j]=0;
            for(k=0;k<n;k++)
                mul[i][j]+=a[i][k]*b[k][j];

            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
