#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //assume the first element is the largest initially int max=arr[0];
    int max=arr[0];
for(int i=1;i<n;i++){
    if (arr[i]>max){
        max=arr[i];//update max if a larger element is found
    }
}
printf("the largest number in the array is:%d\n", max);

    return 0;
}
