#include<stdio.h>
void preincrement(int x)
{
	int p=++x;
	x=x+1;
	printf("@@@@ Pre Increment @@@@\n");
	printf("p is %d\n",p);
	printf("x is %d\n",x);
}
void postincrement(int x)
{
	int p=x++;
	x=x+1;
	printf("@@@@ Post Increment @@@@\n");
	printf("p is %d\n",p);
	printf("x is %d\n",x);
}
int main(void)
{
	int count=0;
   preincrement(count);
   postincrement(count);
}



