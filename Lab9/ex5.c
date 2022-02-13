#include<stdio.h>

struct time{
	int h,m,s,ms;
};

int main(){

	struct time t1, *t2;
	t2 = &t1;
	t1.h = 16;
	t1.m = 15;
	t1.s = 55;
	t1.ms = 70;

	printf("%d:%d:%d:%d\n", t2->h, t2->m, t2->s, t2->ms);

return 0;
}
