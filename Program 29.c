#include <stdio.h>

struct time{
    int hour,minute;
};

struct train{
    char name[50];
    struct time dep,arr;
    char start[50],end[50];
};

int main(){
    struct train t;

    scanf("%s",t.name);
    scanf("%d%d",&t.dep.hour,&t.dep.minute);
    scanf("%d%d",&t.arr.hour,&t.arr.minute);
    scanf("%s",t.start);
    scanf("%s",t.end);

    printf("Train:%s\n",t.name);
    printf("Departure:%d:%d\n",t.dep.hour,t.dep.minute);
    printf("Arrival:%d:%d\n",t.arr.hour,t.arr.minute);
    printf("From:%s To:%s",t.start,t.end);

    return 0;
}
