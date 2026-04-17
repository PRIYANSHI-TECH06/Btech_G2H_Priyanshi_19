#include <stdio.h>
int main() {
    int m1,m2,m3,m4,m5;
    float per;
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)/5.0;

    if(per>=90) printf("A");
    else if(per>=80) printf("B");
    else if(per>=60) printf("C");
    else printf("D");

    return 0;
}
