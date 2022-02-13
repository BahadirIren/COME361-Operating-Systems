#include<stdio.h>
#include<stdlib.h> // for malloc

struct connection{
	int cid;
	int cstate;
};

int main(){
	// we did not use typedef so we need to write struct 
	struct connection con;
	con.cid = 1;
	con.cstate = 0;

	struct connection *ptr = &con;
	struct connection *ptr2 = (struct connection *)malloc(sizeof(struct connection));

	ptr2 -> cid = 2;
	ptr2 -> cstate = 0;

	printf("%d %d, %p\n", con.cid, con.cstate, &con);
	printf("%d %d, %p\n", ptr->cid, ptr->cstate, ptr);
	printf("%d %d, %p\n", ptr2->cid, ptr2->cstate, ptr2);

return 0;
}
