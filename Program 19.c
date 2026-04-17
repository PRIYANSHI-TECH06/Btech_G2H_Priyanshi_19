#include <stdio.h>
int main(){
    int i,n,rem,sum,temp;

    for(i=1;i<=100;i++){
        n=i;
        sum=0;
        temp=n;

        while(n>0){
            rem=n%10;
            sum+=rem*rem*rem;
            n/=10;
        }

        if(sum==temp)
            printf("%d ",temp);
    }
    return 0;
}
