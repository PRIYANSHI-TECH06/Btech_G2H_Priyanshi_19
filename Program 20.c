#include <stdio.h>
#include <math.h>
int main(){
    int bin,i=0,dec=0,rem;
    scanf("%d",&bin);

    while(bin>0){
        rem=bin%10;
        dec+=rem*pow(2,i);
        bin/=10;
        i++;
    }

    printf("%d",dec);
    return 0;
}
