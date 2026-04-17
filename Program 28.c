#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];

    scanf("%s",a);
    scanf("%s",b);

    printf("Length=%lu\n",strlen(a));

    strcpy(b,a);
    printf("Copy=%s\n",b);

    strcat(a,b);
    printf("Concat=%s",a);

    return 0;
}
